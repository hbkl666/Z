#include<stdio.h>
void add ();
void delete(int address)
double  get_money(int time);
void search(int addresss);
void desplay_all();

void delete(int address)
{
        int i,j;
for(i=0;i<car_count;i++)
{
  if(vehicle[i].address==address)
        {
	for(j=i;j<car_count-1;j++)
		{
		vehicle[j]=vehicle[j+1];
		}
		car_count--;
		printf("第%d辆车已出库",address);
        }
}



