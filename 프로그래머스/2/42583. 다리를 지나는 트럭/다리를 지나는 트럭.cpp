#include <string>
#include <vector>
#include <queue>
#include <unordered_map>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int turn = 0;

    queue<int> truck_queue;
    for (auto v : truck_weights)
        truck_queue.push(v);

    // index, truck_state
    // 0 : 다리에 오른다
    // 1 : 다리를 지나간다
    // 2 : 다리를 지나갔다
    std::unordered_map<int, int> bride_truck;

    while (truck_queue.size() > 0 || 
        bride_truck.size() > 0 )
    {
        // 다리위의 차량 무게
        int bridge_weight = 0;

		vector<int> remove_truck;

        // 다리위에 있는 트럭의 상태값을 증가시킨다
        for (auto& kv : bride_truck)
        {
            kv.second += 1;

            if (kv.second == bridge_length)
                remove_truck.push_back(kv.first);
            else
                bridge_weight += truck_weights[kv.first];
        }

        for (auto v : remove_truck)
            bride_truck.erase(v);

        if ( bridge_weight <= weight && 
             truck_queue.size() > 0)
        {
            auto truck_queue_weight = truck_queue.front();

            // 다리위에 있는 트럭과 대기열의 트럭의 무게를 비교한다.
            if (bridge_weight + truck_queue_weight <= weight)
            {
                bridge_weight += truck_queue_weight;
                truck_queue.pop();

                bride_truck.insert( std::make_pair(truck_weights.size() - (truck_queue.size()+1), 0));
            }
        }

        turn++;
    }

    return turn;
}