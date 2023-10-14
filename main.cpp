#include <iostream>
#include <string.h>
using namespace std;
// 输入
// 测试
int Tindex;
void setzero(char temp[])
{
    for (int i = 0; i < 29; i++)
    {
        temp[i] = ' ';
    }
}
void sort(char tree[], char input[], int i)
{
    tree[i] = input[Tindex];
    Tindex++;
    if ('A' <= tree[i] && tree[i] <= 'Z')
    {
        return;
    }
    else
    {
        sort(tree, input, 2 * i + 1);
        sort(tree, input, 2 * i + 2);
    }
}
void print(char temp[])
{
    for (int i = 0; i < 30; i++)
    {
        if (temp[i] != ' ')
        {
            cout << temp[i];
        }
    }
    cout << endl;
}
int main()
{
    char tree[30];
    char input[30];
    string treetemp;
    int i = 0;
    cin >> i;
    for (int j = 0; j < i; j++)
    {
        setzero(tree);
        setzero(input);
        cin >> treetemp;
        for (int k = 0; k < treetemp.length(); k++)
        {
            input[k] = treetemp[k];
        }
        // print(input);
        // cout << input[0] << input[1] << endl;
        Tindex = 0;
        sort(tree, input, 0);
        print(tree);
    }
}