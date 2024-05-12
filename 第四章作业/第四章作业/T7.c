#include <stdio.h>
int main()
{
  double sq,hou,er;
  printf("请输入税前收入：");
  scanf("%lf",&sq);
  if(sq<=120000)
  {
	hou=sq;
  }
  else
  {
	er=sq-60000-5000*12;
	if(er<=36000)
	{
		hou=sq-er*0.03;
	}
	else if(er<=144000)
	{
		hou=sq-(er*0.1-2520);
	}
	else if(er<=300000)
	{
		hou=sq-(er*0.2-16920);
	}
	else if(er<=420000)
	{
		hou=sq-(er*0.25-31920);
	}
	else if(er<=660000)
	{
		hou=sq-(er*0.3-52920);
	}
	else if(er<=960000)
	{
		hou=sq-(er*0.35-85920);
	}
	else
	{
		hou=sq-(er*0.45-181920);
	}
  }
	printf("税后收入：%.2lf",hou);
	return 0;
}
