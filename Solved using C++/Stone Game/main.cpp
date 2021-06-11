//https://codeforces.com/contest/1538/problem/A

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t=0;
    cin >> t;
    int n[t] = {0}, moves[t]= {0};

    for(int i=0; i<t; i++) {
        int temp = 0;
        cin >> temp;
        n[i] = temp;

        int var_a[temp] = {0};
        for(int j=0; j<temp; j++) {
            cin >> var_a[j];
        }

        //min, max element
        int min_num=INT_MAX, max_num=INT_MIN;
        for(int k=0; k<temp; k++) {
            min_num = min(min_num, var_a[k]);
            max_num = max(max_num, var_a[k]);
        }

        int cost_left=0, cost_right=0, cost_min_left=0, cost_max_right=0, cost_min_right=0, cost_max_left=0;
        bool flag_min=false, flag_max=false;

        //Absolute left
        for(int l=0; l<temp; l++) {
            //break if both found
            if(flag_min && flag_max) {
                break;
            }
            if(var_a[l]==min_num) {
                flag_min = true;
                cost_left = l+1;
            }
            if(var_a[l]==max_num) {
                flag_max = true;
                cost_left = l+1;
            }
        }
        //cout << "Cost left = " << cost_left << endl;

        //Absolute right
        flag_min=false;
        flag_max=false;

        for(int l=temp-1; l>=0; l--) {
            //break if both found
            if(flag_min && flag_max) {
                break;
            }
            if(var_a[l]==min_num) {
                flag_min = true;
                cost_right = (temp-l);
            }
            if(var_a[l]==max_num) {
                flag_max = true;
                cost_right = (temp-l);
            }
        }
        //cout << "Cost right = " << cost_right << endl;


        //Min left, Max left
        flag_min=false;
        flag_max=false;

        for(int l=0; l<temp; l++) {
            //break if both found
            if(flag_min && flag_max) {
                break;
            }
            if(var_a[l]==min_num) {
                flag_min = true;
                cost_min_left = l+1;
            }
            if(var_a[l]==max_num) {
                flag_max = true;
                cost_max_left = l+1;
            }
        }
        //cout << "Cost min left & max left = " << cost_min_left << " " << cost_max_left << endl;


        //Min right, Max right
        flag_min=false;
        flag_max=false;

        for(int l=temp-1; l>=0; l--) {
            //break if both found
            if(flag_min && flag_max) {
                break;
            }
            if(var_a[l]==min_num) {
                flag_min = true;
                cost_min_right = (temp-l);
            }
            if(var_a[l]==max_num) {
                flag_max = true;
                cost_max_right = (temp-l);
            }
        }
        //cout << "Cost min right & max right = " << cost_min_right << " " << cost_max_right << endl;

        int temp_cost = min(cost_left, cost_right);
        int temp_cost2 = min((cost_min_left+cost_max_right), (cost_max_left+cost_min_right));
        moves[i] = min(temp_cost, temp_cost2);
    }

    for(int m=0; m<t; m++) {
        cout << moves[m] << endl;
    }

    return 0;
}
