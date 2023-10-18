/*
* Programmer: Muhammad Umar
* Date: 10/10/2023
* Description: Take prices of all mobile phones of all branches from user. Calculate total bill for each branch and total bill for all branches. Also identify the branch id where maximum bill arrived and branch and mobile pone id where bill is highest of all mobile phones.
*/

#include <stdio.h>

void main(){
    int X, Y, totalBill = 0, billPerBranch = 0, max = 0, maxBill = 0, maxBillBranch, maxBillMobile, maxBillMobileBranch;
    
    printf("Enter total number of branches : "); //taking total numbers of branches as user's input
    scanf("%d", &X);
    
    printf("Enter total number of mobile phones per branch : "); //taking total numbers of mobile phones per branch as user's input
    scanf("%d", &Y);
    
    int arr[X][Y];
    
    printf("\n");
    
    //asking user for prices of all mobile phones
    for(int i = 0; i < X; i++){
        for(int j = 0; j < Y; j++){
            printf("Enter price of mobile no. %d of branch no. %d : ", j+1, i+1);
            scanf("%d", &arr[i][j]);
        }
    }
    
    for(int i = 0; i < X; i++){
        
        billPerBranch = 0;
        
        for(int j = 0; j < Y; j++){
            billPerBranch += arr[i][j]; //calclating total bill for each branch
            
            //asking branch and mobile phone IDs where bill is highest of all mobile phones
            if(arr[i][j] > maxBill){
                maxBill = arr[i][j];
                maxBillMobileBranch = i+1;
                maxBillMobile = j+1;
            }
        }
        printf("\nTotal bill for branch no. %d : %d", i+1, billPerBranch);
        
        totalBill += billPerBranch; //calclating total bill for all branches
        
        //identifying the branch ID where maximum bill arrived
        if(billPerBranch > max){
            max = billPerBranch;
            maxBillBranch = i+1;
        }
    }
    printf("\nTotal bill for all branches : %d\nMaximum bill is arrived on branch : %d\nMobile phone %d of branch %d has maximum bill.", totalBill, maxBillBranch, maxBillMobile, maxBillMobileBranch);
} //end main
