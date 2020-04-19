Function Description

Complete the insertionSort1 function in the editor below. It should print the interim and final arrays, each on a new line.

/*insertionSort1 has the following parameter(s):

n: an integer, the size of 
arr: an array of integers to sort
Input Format

The first line contains the integer , the size of the array .
The next line contains  space-separated integers .

Constraints



Output Format

Print the array as a row of space-separated integers each time there is a shift or insertion.

Sample Input

5
2 4 6 8 3
Sample Output

2 4 6 8 8 
2 4 6 6 8 
2 4 4 6 8 
2 3 4 6 8 */


#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);
void print_array(vector<int>arr,int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<' ';
    }
    cout<<endl;
}

// Complete the insertionSort1 function below.
void insertionSort1(int n, vector<int> arr)
{
 int key=arr[n-1];
 int j=n-2;
 while(j>=0 && arr[j]>key)
 { arr[j+1]=arr[j];
 print_array(arr,n);
    j--;
 } 
 if(arr[j]<key)
 { arr[j+1]=key;
  print_array(arr,n);
 }

}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split_string(arr_temp_temp);

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    insertionSort1(n, arr);

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }
