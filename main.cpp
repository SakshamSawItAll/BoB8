#include <bits/stdc++.h>
using namespace std;
int play_matrix[6][7],change_matrix[6][7]={0},player_id,alt_player_id,temp_player_id,move_no;


int main()
{
    int i,j;

    for(i=0;i<6;i++)
        for(j=0;j<7;j++)
             cin>>play_matrix[i][j];

    cin>>move_no;
    cin>>player_id;
    temp_player_id=player_id;


    return 0;
}
