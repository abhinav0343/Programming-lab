#include <stdio.h>

int main() 
{
    int n,v,b1=0,b2=0,b3=0,b4=0,b5=0,spoiled=0;
    printf("Enter number of total no.of votes:");
    scanf("%d",&n);
    int votes[n];
    int candidate[6] = {b1,b2,b3,b4,b5,spoiled};
    printf("vote number is of candidate number 1 to 5\n");
    for(int i = 0;i<n;i++)
    {
        printf("Enter your vote: ");
        scanf("%d",&votes[i]);
        switch(votes[i])
        {
            case 1: candidate[0]++;
                    break;
            case 2: candidate[1]++;
                    break;
            case 3: candidate[2]++;
                    break;
            case 4: candidate[3]++;
                    break;
            case 5: candidate[4]++;
                    break;
            default: candidate[5]++;
        }
    }
    printf("candidate 1:%dvotes\n",candidate[0]);
    printf("candidate 2:%dvotes\n",candidate[1]);
    printf("candidate 3:%dvotes\n",candidate[2]);
    printf("candidate 4:%dvotes\n",candidate[3]);
    printf("candidate 5:%dvotes\n",candidate[4]);
    printf("spoilt ballots:%dvotes",candidate[5]);
    return 0;
}