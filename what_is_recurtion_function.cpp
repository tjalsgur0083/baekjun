//baekjoon 17478
#include <iostream>
using namespace std;

int repeat = 0;
void output(int out)
{
    for(int i = 0; i < out; i++)
    {
        cout << "____";
    }
}
void answer(int n)
{
    if(n == 0)
    {
        output(repeat);
        cout << "\"재귀함수가 뭔가요?\"\n";
        output(repeat);
        cout << "\"재귀함수는 자기 자신을 호출하는 함수라네\"\n";
        output(repeat);
        cout << "라고 답변하였지.\n";
        repeat--;
        return;
    }
    output(repeat);
    cout << "\"재귀함수가 뭔가요?\"\n";
    output(repeat);
    cout << "\"잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어.\n";
    output(repeat);
    cout << "마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지.\n";
    output(repeat);
    cout << "그의 답은 대부분 옳았다고 하네. 그런데 어느 날, 그 선인에게 한 선비가 찾아와서 물었어.\"\n";
    repeat++;
    answer(n - 1);
    output(repeat);
    cout << "라고 답변하였지.\n";
    repeat--;
}
int main()
{
    int num = 0;

    cin >> num;
    cout << "어느 한 컴퓨터공학과 학생이 유명한 교수님을 찾아가 물었다.\n";
    answer(num);
}