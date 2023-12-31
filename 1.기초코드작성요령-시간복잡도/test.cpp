#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int func1(int N)
{
    int sum = 0;
    int number = 1;
    for(number=1; number<=N; number++){
        if(number%3==0||number%5==0){
            sum += number;
        }
    }
    return sum;
}

int func2(int arr[], int N)
{

    ios::sync_with_stdio(0);
    cin.tie(0);

    for(int i = 0; i < N; i++){
        for (int j = i+1; j < N; j++){
            if(arr[i]+arr[j]==100){
                return 1;
            }

        }


    }



    return 0;
}

int func3(int N)
{   if(sqrt(N)*sqrt(N)==N){
        return 1;
    }
    return 0;
}

int func4(int N)
{
    int i;
    int arr[30];
    int num;
    //2�� 1�º��� 2�� 29�±���.
    for(i=0;i<=29;i++){
        arr[i] = pow(2, i);
    }

    for(i=0;i<=29;i++){
        if(N>=arr[i]){
            num = arr[i];

        }
    }
    return num;
}

void test1()
{
    cout << "****** func1 test ******\n";
    int n[3] = {16, 34567, 27639};
    int ans[3] = {60, 278812814, 178254968};
    for(int i = 0; i < 3; i++)
    {
        int result = func1(n[i]);
        cout << "TC #" << i << '\n';
        cout << "expected : " << ans[i] << " result : " << result;
        if(ans[i] == result) cout << " ... Correct!\n";
        else cout << " ... Wrong!\n";
    }
    cout << "*************************\n\n";
}

void test2()
{
    cout << "****** func2 test ******\n";
    int arr[3][4] = {{1,52,48}, {50,42}, {4,13,63,87}};
    int n[3] = {3, 2, 4};
    int ans[3] = {1, 0, 1};
    for(int i = 0; i < 3; i++)
    {
        int result = func2(arr[i], n[i]);
        cout << "TC #" << i << '\n';
        cout << "expected : " << ans[i] << " result : " << result;
        if(ans[i] == result) cout << " ... Correct!\n";
        else cout << " ... Wrong!\n";
    }
    cout << "*************************\n\n";
}

void test3()
{
    cout << "****** func3 test ******\n";
    int n[3] = {9, 693953651, 756580036};
    int ans[3] = {1, 0, 1};
    for(int i = 0; i < 3; i++)
    {
        int result = func3(n[i]);
        cout << "TC #" << i << '\n';
        cout << "expected : " << ans[i] << " result : " << result;
        if(ans[i] == result) cout << " ... Correct!\n";
        else cout << " ... Wrong!\n";
    }
    cout << "*************************\n\n";
}

void test4()
{
    cout << "****** func4 test ******\n";
    int n[3] = {5, 97615282, 1024};
    int ans[3] = {4, 67108864, 1024};
    for(int i = 0; i < 3; i++)
    {
        int result = func4(n[i]);
        cout << "TC #" << i << '\n';
        cout << "expected : " << ans[i] << " result : " << result;
        if(ans[i] == result) cout << " ... Correct!\n";
        else cout << " ... Wrong!\n";
    }
    cout << "*************************\n\n";
}

int main(void)
{
    test1();
    test2();
    test3();
    test4();
}
