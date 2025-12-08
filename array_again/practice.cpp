// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     cout << "Hello World" << endl;
// }

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int a = 50;
//     int b = 40;
//     int c = a + b;
//     cout << c << endl;
// }

// Question : 1
// Input: nums = [7, 4, 1, 5, 3]

// Output: [1, 3, 4, 5, 7]

// Explanation:
// 1 <= 3 <= 4 <= 5 <= 7

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     vector<int> num = {7, 4, 1, 5, 3};

//     for(int i = 0; i < num.size(); i++){
//         for(int j = 0; j < num.size() - i - 1; j++){
//             if(num[j] >= num[j+1]){
//                 swap(num[j], num[j+1]);
//             }
//         }
//     }

//     for(int i = 0; i < num.size(); i++){
//         cout << num[i] << endl;
//     }
// }

// Question : 2

// Input: nums = [2, 9, 1, 7, 4]

// Output: 9

// Explanation:
// 9 is the greatest among all elements.

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     vector<int> num = {2, 9, 1, 7, 4};

//     for (int i = 0; i < num.size() - 1; i++)
//     {
//         for (int j = 0; j < num.size() - i - 1; j++)
//         {
//             if (num[j] < num[j + 1])
//                 swap(num[j], num[j + 1]);
//         }
//     }

//     cout << num[0];
// }

// Question : 3

// Input: nums = [4, 7, 1, 9, 3]

// Output: 7

// Explanation:
// Largest = 9
// Second largest = 7

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     vector<int> num = {4, 7, 1, 9, 3};

//     sort(num.begin(), num.end());

//     cout << num[num.size() - 2];
// }

// Question : 4

// Input:
// nums = [2, 3, 3, 3, 5]
// target = 3

// Output: 3

// Explanation:
// 3 appears 3 times.

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     vector<int> arr = {2, 3, 3, 3, 5};
//     int repeat = 1;

//     for(int i = 0; i < arr.size() - 1; i++){
//         if(arr[i] == arr[i+1]){
//             repeat++;
//         }
//     }

//     cout << repeat;
// }

// Question : 5

// Input: nums = [1, 0, 2, 0, 3]

// Output: [1, 2, 3, 0, 0]

// Explanation:
// All non-zero numbers stay in order.
// Zeroes move to the end.

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     vector<int> arr = {1, 0, 2, 0, 3, 5, 0, 8};

//     int nonZero = 0;

//     for (int i = 0; i < arr.size(); i++)
//     {
//         if(arr[i] != 0){
//             arr[nonZero] = arr[i];
//             nonZero++;
//         }
//     }

//     while (nonZero < arr.size())
//     {
//         arr[nonZero] = 0;
//         nonZero++;
//     }

//     for (int i = 0; i < arr.size(); i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// Question : 6

// Input: nums = [3, 0, 1]

// Output: 2

// Explanation:
// Numbers from 0 to 3 are {0,1,2,3}; 2 is missing.

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     vector<int> arr = {3, 0, 1, 15, 2, 5, 17};
//     unordered_set<int> s(arr.begin(), arr.end());

//     int missing = 0;
//     while (true)
//     {
//         if (s.find(missing) == s.end())
//         {
//             cout << missing;
//             break;
//         }
//         missing++;
//     }

//     cout << endl;
//     return 0;
// }

// Question : 7

// Input: nums = [2, 4, 7, 9, 10]

// Output:
// Even = 3
// Odd = 2

// Explanation:
// Even → 2, 4, 10
// Odd → 7, 9

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     vector<int> arr = {2, 4, 7, 9, 10};
//     int even = 0;
//     int odd = 0;

//     for(int i = 0; i < arr.size(); i++){
//         if(arr[i] % 2 == 0){
//             even++;
//         } else {
//             odd++;
//         }
//     }

//     cout << even << endl;
//     cout << odd << endl;
// }