/* **************************************************************************

    * File Name : What_is_the_Probability.cpp

    * Creation Date : 2018-09-07 18:35:13

    * Last Modified : 2018-09-14 11:03:06

    * Created By : Samuel Chi <Yu-Ning Chi>

************************************************************************** */

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int numOfInput; //資料組數
    int numOfPeople; //參加人數
    double probability; //特定事件機率
    int numOfWin; //第幾個人贏

    cin >> numOfInput; //輸入資料組數
    for(int i = 0; i < numOfInput; i++)
    {
        cin >> numOfPeople >> probability >> numOfWin;
        //分別輸入人數、機率與第幾個人贏
        if(probability == 0)
        {   
            cout << "0.0000" <<endl; //若機率為0，則直接印出0.0000
            continue;
        }
        //公式： 機率 * (1 - 機率) ^ (第幾人 - 1) / (1 - (1 - 機率)＾人數)
        else
            cout << setprecision(4) << fixed 
                << probability * pow((1 - probability), (numOfWin - 1)) / 
                (1 - pow((1 - probability), numOfPeople)) << endl;
    }
    return 0;
}
