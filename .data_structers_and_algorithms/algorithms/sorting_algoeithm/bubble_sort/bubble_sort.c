 #include<stdio.h>

int arry[]={9,7,5,6,8,1,3,2,4,10}; //global variable

//function bubblesort
int bubblesort(){
  int temp;
  int size_of_arry=sizeof(arry)/4;   //size of int arry
  printf("Input arry:[");
  for(int a=0;a<size_of_arry;a++){
    printf("%d  ",arry[a]);
  }
  printf("]\n");

  //printf("arry:\n%d\n",arry[]);
  //printf\f("size of arry:\n%d\n",size_of_arry); 
  
//working first for loop:
      for(int i=0;i<size_of_arry;i++){
      printf("#Iteration=%d\n",i);
      printf("arry:[");
      for(int b1=0;b1<size_of_arry;b1++){
       printf("%d ",arry[b1]);
      }
      printf("]\n");
      
      
//working second for loop:
            for(int j=0;j<size_of_arry-i;j++){
                 if(arry[j]>arry[j+1]){
                       temp=arry[j];
		                   arry[j]=arry[j+1];
			                 arry[j+1]=temp;
			                 printf("Items are compared[%d,%d]==>> swapped [%d,%d]\n",arry[j+1],arry[j],arry[j],arry[j+1]);
                  }
            printf("Items are compared[%d,%d]==>> not swapped\n",arry[j],arry[j+1]);
             
            }
            
            
     printf("=====================================================================\n");
     }
   
   printf("Output arry:");
   for(int k=0;k<size_of_arry;k++){
    printf("%d,",arry[k]);
    }
   return 0;
 }
//ending of bubblesort function
int main(){
 
 bubblesort();

return 0;
}
/*
Output:
Input arry:[9  7  5  6  8  1  3  2  4  10  ]
#Iteration=1
arry:[9 7 5 6 8 1 3 2 4 10 ]
Items are compared[9,7]==>> swapped [7,9]
Items are compared[7,9]==>> not swapped
Items are compared[9,5]==>> swapped [5,9]
Items are compared[5,9]==>> not swapped
Items are compared[9,6]==>> swapped [6,9]
Items are compared[6,9]==>> not swapped
Items are compared[9,8]==>> swapped [8,9]
Items are compared[8,9]==>> not swapped
Items are compared[9,1]==>> swapped [1,9]
Items are compared[1,9]==>> not swapped
Items are compared[9,3]==>> swapped [3,9]
Items are compared[3,9]==>> not swapped
Items are compared[9,2]==>> swapped [2,9]
Items are compared[2,9]==>> not swapped
Items are compared[9,4]==>> swapped [4,9]
Items are compared[4,9]==>> not swapped
Items are compared[9,10]==>> not swapped
Items are compared[10,0]==>> swapped [0,10]
Items are compared[0,10]==>> not swapped
=====================================================================
#Iteration=2
arry:[7 5 6 8 1 3 2 4 9 0 ]
Items are compared[7,5]==>> swapped [5,7]
Items are compared[5,7]==>> not swapped
Items are compared[7,6]==>> swapped [6,7]
Items are compared[6,7]==>> not swapped
Items are compared[7,8]==>> not swapped
Items are compared[8,1]==>> swapped [1,8]
Items are compared[1,8]==>> not swapped
Items are compared[8,3]==>> swapped [3,8]
Items are compared[3,8]==>> not swapped
Items are compared[8,2]==>> swapped [2,8]
Items are compared[2,8]==>> not swapped
Items are compared[8,4]==>> swapped [4,8]
Items are compared[4,8]==>> not swapped
Items are compared[8,9]==>> not swapped
Items are compared[9,0]==>> swapped [0,9]
Items are compared[0,9]==>> not swapped
=====================================================================
#Iteration=3
arry:[5 6 7 1 3 2 4 8 0 9 ]
Items are compared[5,6]==>> not swapped
Items are compared[6,7]==>> not swapped
Items are compared[7,1]==>> swapped [1,7]
Items are compared[1,7]==>> not swapped
Items are compared[7,3]==>> swapped [3,7]
Items are compared[3,7]==>> not swapped
Items are compared[7,2]==>> swapped [2,7]
Items are compared[2,7]==>> not swapped
Items are compared[7,4]==>> swapped [4,7]
Items are compared[4,7]==>> not swapped
Items are compared[7,8]==>> not swapped
Items are compared[8,0]==>> swapped [0,8]
Items are compared[0,8]==>> not swapped
=====================================================================
#Iteration=4
arry:[5 6 1 3 2 4 7 0 8 9 ]
Items are compared[5,6]==>> not swapped
Items are compared[6,1]==>> swapped [1,6]
Items are compared[1,6]==>> not swapped
Items are compared[6,3]==>> swapped [3,6]
Items are compared[3,6]==>> not swapped
Items are compared[6,2]==>> swapped [2,6]
Items are compared[2,6]==>> not swapped
Items are compared[6,4]==>> swapped [4,6]
Items are compared[4,6]==>> not swapped
Items are compared[6,7]==>> not swapped
Items are compared[7,0]==>> swapped [0,7]
Items are compared[0,7]==>> not swapped
=====================================================================
#Iteration=5
arry:[5 1 3 2 4 6 0 7 8 9 ]
Items are compared[5,1]==>> swapped [1,5]
Items are compared[1,5]==>> not swapped
Items are compared[5,3]==>> swapped [3,5]
Items are compared[3,5]==>> not swapped
Items are compared[5,2]==>> swapped [2,5]
Items are compared[2,5]==>> not swapped
Items are compared[5,4]==>> swapped [4,5]
Items are compared[4,5]==>> not swapped
Items are compared[5,6]==>> not swapped
Items are compared[6,0]==>> swapped [0,6]
Items are compared[0,6]==>> not swapped
=====================================================================
#Iteration=6
arry:[1 3 2 4 5 0 6 7 8 9 ]
Items are compared[1,3]==>> not swapped
Items are compared[3,2]==>> swapped [2,3]
Items are compared[2,3]==>> not swapped
Items are compared[3,4]==>> not swapped
Items are compared[4,5]==>> not swapped
Items are compared[5,0]==>> swapped [0,5]
Items are compared[0,5]==>> not swapped
=====================================================================
#Iteration=7
arry:[1 2 3 4 0 5 6 7 8 9 ]
Items are compared[1,2]==>> not swapped
Items are compared[2,3]==>> not swapped
Items are compared[3,4]==>> not swapped
Items are compared[4,0]==>> swapped [0,4]
Items are compared[0,4]==>> not swapped
=====================================================================
#Iteration=8
arry:[1 2 3 0 4 5 6 7 8 9 ]
Items are compared[1,2]==>> not swapped
Items are compared[2,3]==>> not swapped
Items are compared[3,0]==>> swapped [0,3]
Items are compared[0,3]==>> not swapped
=====================================================================
#Iteration=9
arry:[1 2 0 3 4 5 6 7 8 9 ]
Items are compared[1,2]==>> not swapped
Items are compared[2,0]==>> swapped [0,2]
Items are compared[0,2]==>> not swapped
=====================================================================
#Iteration=10
arry:[1 0 2 3 4 5 6 7 8 9 ]
Items are compared[1,0]==>> swapped [0,1]
Items are compared[0,1]==>> not swapped
=====================================================================
Output arry:0,1,2,3,4,5,6,7,8,9,
*/
