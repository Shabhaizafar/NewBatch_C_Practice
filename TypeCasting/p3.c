// Define a structure for a cricket player (name, matches, runs, average). Write a program to find the player with the best average.


#include<stdio.h>
struct Player{
    char pname[10];
    int matches;
    int runs;
}p[100];

void main(){
    int count = 0;
    while (1){
        int choice;
        printf("Do you want to add new Player : ");
        scanf("%d",&choice);
        if (!choice){
            break;
        }
        printf("Enter Playper Name : ");
        scanf("%s",p[count].pname);
        printf("Enter Playper Matches : ");
        scanf("%d",&p[count].matches);
        printf("Enter Playper Runs : ");
        scanf("%d",&p[count].runs);
        count++;
    }
    
    printf("Pname\tMatches\tRuns\tAvg\n");
    for (int i = 0; i < count; i++){
        printf("\n%s\t%d\t%d\t%.2f",p[i].pname,p[i].matches,p[i].runs,(float)p[i].runs/p[i].matches);
    }
}



// Method : 2 Local Structure with Local use

/*
#include<stdio.h>
void main(){
    struct Player{

    }p[100];
}
*/
// Method  : 3   global Structure with globally use 
/*
#include<stdio.h>

struct Player{
  
}p[100];


void main(){
    
}
*/


// Method : 2 Local Structure with Local use

/*
#include<stdio.h>
void main(){
    struct Player{

    };
    struct Player p[100];
}
*/

// Method  : 1   global Structure with local use 
/*
#include<stdio.h>

struct Player{
  
};


void main(){
    struct Player p[100];
}
*/


/*
Weather Monitoring System – 
Define a structure for weather data (city, date, max temperature, min temperature, rainfall).
Write a program to display the city with the heaviest rainfall.
*/



