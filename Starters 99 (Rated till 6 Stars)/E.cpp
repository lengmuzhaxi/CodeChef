#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int calculateMod(int current, int required) 
{
    int mod1 = current % 3;
    int mod2 = required % 3;
    if (mod1 == mod2)
        return 0;
    if (mod1 < mod2)
        return mod2 - mod1;
    return mod2 + (3 - mod1);
}
int calculateMinAnswer(vector<int>& numbers) 
{
    int answer = 0;
    for (int i = 3; i < numbers.size(); i++) 
    {
        answer += calculateMod(numbers[i], numbers[i - 3]);
        numbers[i] = numbers[i - 3];
    }
    return answer;
}

void solveTestCase() {
    int n;
    cin >> n;
    vector<int> numbers(n);
    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }
    vector<vector<int>> combinations;
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            for (int k = 0; k < 3; k++) 
            {
                if (((i + j + k) % 3) == 0)
                    combinations.push_back({ i, j, k });
            }
        }
    }

    int minAnswer = 1e9;
    for (auto vec : combinations) 
    {
        vector<int> temp = vec;
        for (auto num : numbers)
            temp.push_back(num);
        minAnswer = min(minAnswer, calculateMinAnswer(temp));
    }

    cout << minAnswer << endl;
}

int main() 
{
    int totalTests = 1;
    cin >> totalTests;
    for (int testNo = 1; testNo <= totalTests; testNo++) 
    {
        solveTestCase();
    }
    return 0;
}