#include <stdio.h>
#include <stdlib.h>
#include <string.h>
double Question1(double lakesuperior[],double lakemichigan[],double lakehuron[],double lakeerie[],double lakeontario[],double lakestclair[],double *XbAverage,double *XbOntario,double *XbErie, double *XbHuron, double *XbMichigan, double *XbSuperior, double *XbClair){
	int xp;
	double XAOntario=0, XAErie=0, XAHuron=0, XAMichigan=0, XASuperior=0, XAClair=0;
	
	for (xp=0;xp<366;xp++){
	XAOntario=XAOntario+lakeontario[xp];
	XAErie=XAErie+lakeerie[xp];
	XAHuron=XAHuron+lakehuron[xp];
	XAMichigan=XAMichigan+lakemichigan[xp];
	XASuperior=XASuperior+lakesuperior[xp];
	XAClair=XAClair+lakestclair[xp];
	}
	*XbOntario=XAOntario/366;
	*XbErie=XAErie/366;
	*XbSuperior=XASuperior/366;
	*XbHuron=XAHuron/366;
	*XbClair=XAClair/366;
	*XbMichigan=XAMichigan/366;
	*XbAverage=(XAOntario+XAErie+XASuperior+XAHuron+XAClair+XAMichigan)/(366*6);
	return 0;
}

double Question2 (double XbAverage,double XbOntario, double XbErie,double XbHuron,double XbMichigan,double XbSuperior,double XbClair, double *varray){
	varray[0]=XbOntario;
	varray[1]=XbErie;
	varray[2]=XbHuron;
	varray[3]=XbMichigan;
	varray[4]=XbSuperior;
	varray[5]=XbClair;
	
	
//////////Question 2	

{
    double array[6], max, min;
    int i;
	
   
       for(i=0;i<6;i++)
            {
	 array[0]=XbOntario;
     array[1]=XbErie;
	 array[2]=XbHuron;
	 array[3]=XbMichigan;
	 array[4]=XbSuperior;
	 array[5]=XbClair;
	    }

    max = array[0];
    min = array[0];

    for(i=1; i<6; i++)
    {
        if(array[i]>max)
        {
            max = array[i];
        }

        if(array[i]<min)
        {
            min = array[i];
        }
    }

    {
        if(XbOntario >= XbAverage){
            printf("\nThe temperature of Lake Ontario is above the average");
        }
        if(XbOntario <= XbAverage){
            printf("\nThe temperature of Lake Ontario is below the average");
        }
	}
	{
        if(XbErie >= XbAverage){
            printf("\nThe temperature of Lake Erie is above the average");
        }
        if(XbErie <= XbAverage){
            printf("\nThe temperature of Lake Erie is below the average");
        }
	}
	{
         if(XbHuron >= XbAverage){
            printf("\nThe temperature of Lake Huron is above the average");
        }
        if(XbHuron <= XbAverage){
            printf("\nThe temperature of Lake Huron is below the average");
        }
	}
	{
         if(XbMichigan >= XbAverage){
            printf("\nThe temperature of Lake Michigan is above the average");
        }
        if(XbMichigan <= XbAverage){
            printf("\nThe temperature of Lake Michigan is below the average");
        }
	}
	{
         if(XbSuperior >= XbAverage){
            printf("\nThe temperature of Lake Superior is above the average");
        }
        if(XbSuperior <= XbAverage){
            printf("\nThe temperature of Lake Superior is below the average");
        }
	}
	{
         if(XbClair >= XbAverage){
            printf("\nThe temperature of Lake Clair is above the average");
        }
        if(XbClair <= XbAverage){
            printf("\nThe temperature of Lake Clair is below the average");
        }
    }
    
   ////double  XbOntario, XbErie, XbHuron, XbMichigan, XbSuperior, XbClair;
   
   if (XbOntario == max){
	   printf("\n\nThe warmest temperature is: %0.2lf degrees Celcius (Lake ontario).", max);
   }
   
    if (XbErie == max){
	   printf("\n\nThe warmest temperature is: %0.2lf degrees Celcius (Lake Erie).", max);
   }
   
    if (XbHuron == max){
	   printf("\n\nThe warmest temperature is: %0.2lf degrees Celcius (Lake Huron).", max);
   }
   
    if (XbMichigan == max){
	   printf("\n\nThe warmest temperature is: %0.2lf degrees Celcius (Lake Michigan).", max);
   }
   
    if (XbSuperior == max){
	   printf("\n\nThe warmest temperature is: %0.2lf degrees Celcius (Lake Superior).", max);
   }
   
    if (XbOntario == max){
	   printf("\n\nThe warmest temperature is: %0.2lf degrees Celcius (Lake ontario).", max);
   }
   
    ////double  XbOntario, XbErie, XbHuron, XbMichigan, XbSuperior, XbClair;
   
   if (XbOntario == min){
	   printf("\nThe coldest temperature is: %0.2lf degrees Celcius (Lake ontario).\n\n", min);
   }
   
    if (XbErie == min){
	   printf("\nThe coldest temperature is: %0.2lf degrees Celcius (Lake Erie).\n\n", min);
   }
   
    if (XbHuron == min){
	   printf("\nThe coldest temperature is: %0.2lf degrees Celcius (Lake Huron).\n\n", min);
   }
   
    if (XbMichigan == min){
	   printf("\nThe coldest temperature is: %0.2lf degrees Celcius (Lake Michigan).\n\n", min);
   }
   
    if (XbSuperior == min){
	   printf("\nThe coldest temperature is: %0.2lf degrees Celcius (Lake Superior).\n\n", min);
   }
   
    if (XbClair == min){
	   printf("\nThe coldest temperature is: %0.2lf degrees Celcius (Lake Clair).\n\n", min);
   }
   

}
	return 0;
}
double Question4(double lakesuperior[],double lakemichigan[],double lakehuron[],double lakeerie[],double lakeontario[],double lakestclair[]){
	int i;
	double maxs;
	maxs = lakesuperior[0];
	
    for(i=1; i<366; i++)
    {
        if(lakesuperior[i]>maxs)
        {
            maxs = lakesuperior[i];
        }
    }
    double maxm;
	maxm = lakemichigan[0];
    for(i=1; i<366; i++)
    {
        if(lakemichigan[i]>maxm)
        {
            maxm = lakemichigan[i];
        }
    }
    double maxh;
	maxh = lakehuron[0];
    for(i=1; i<366; i++)
    {
        if(lakehuron[i]>maxh)
        {
            maxh = lakehuron[i];
        }
    }
     double maxe;
	maxe = lakeerie[0];
    for(i=1; i<366; i++)
    {
        if(lakeerie[i]>maxe)
        {
            maxe = lakeerie[i];
        }
    }
    double maxo;
	maxo = lakeontario[0];
    for(i=1; i<366; i++)
    {
        if(lakeontario[i]>maxo)
        {
            maxo = lakeontario[i];
        }
    }
    double maxc;
	maxc = lakestclair[0];
    for(i=1; i<366; i++)
    {
        if(lakestclair[i]>maxc)
        {
            maxc = lakestclair[i];
        }
    }
    double maxtemp=maxs;
     if(maxm>maxtemp)
        {
            maxtemp = maxm;
        }
    if(maxh>maxtemp)
        {
            maxtemp = maxh;
        }
        if(maxe>maxtemp)
        {
            maxtemp = maxe;
        }
        if(maxo>maxtemp)
        {
            maxtemp = maxo;
        }
        if(maxc>maxtemp)
        {
            maxtemp = maxo;
        }
   
     printf("\nQuestion 4:\n");
     printf("Warmest temperature:\n");
    for(i=0;i<366;i++){
		if (maxtemp==lakesuperior[i]){
			if(i<=30)
			printf("Lake Superior:%d/January Temp:%0.2lf C\n",i+1,lakesuperior[i]);
		}
	if (maxtemp==lakesuperior[i]){
			if(i>30 && i<=59)
			printf("Lake Superior:%d/February temp:%0.2lf C\n",i-30,lakesuperior[i]);
		}
		if (maxtemp==lakesuperior[i]){
			if(i>59 && i<=90)
			printf("Lake Superior:%d/March Temp:%0.2lf C\n",i-59,lakesuperior[i]);
		}
		if (maxtemp==lakesuperior[i]){
			if(i>90 && i<=120)
			printf("Lake Superior:%d/April Temp:%0.2lf C\n",i-90,lakesuperior[i]);
		}	
		if (maxtemp==lakesuperior[i]){
			if(i>120 && i<=151)
			printf("Lake Superior:%d/May Temp:%0.2lf C\n",i-120,lakesuperior[i]);
		}
		if (maxtemp==lakesuperior[i]){
			if(i>151 && i<=181)
			printf("Lake Superior:%d/june Temp:%0.2lf C\n",i-151,lakesuperior[i]);
		}
		if (maxtemp==lakesuperior[i]){
			if(i>181 && i<=212)
			printf("Lake Superior:%d/July temp:%0.2lf C\n",i-181,lakesuperior[i]);
		}
		if (maxtemp==lakesuperior[i]){
			if(i>212 && i<=243)
			printf("Lake Superior:%d/August Temp:%0.2lf C\n",i-212,lakesuperior[i]);
		}
		if (maxtemp==lakesuperior[i]){
			if(i>243 && i<=273)
			printf("Lake Superior:%d/September Temp:%0.2lf C\n",i-243,lakesuperior[i]);
		}
		if (maxtemp==lakesuperior[i]){
			if(i>273 && i<=304)
			printf("Lake Superior:%d/October Temp:%0.2lf C\n",i-273,lakesuperior[i]);
		}
		if (maxtemp==lakesuperior[i]){
			if(i>304 && i<=334)
			printf("Lake Superior:%d/November Temp:%0.2lf C\n",i-304,lakesuperior[i]);
		}
		if (maxtemp==lakesuperior[i]){
			if(i>334 && i<=365)
			printf("Lake Superior:%d/December Temp:%0.2lf C\n",i-334,lakesuperior[i]);
		}

		if (maxtemp==lakemichigan[i]){
			if(i<=30)
			printf("Lake Michigan:%d/January Temp:%0.2lf C\n",i+1,lakemichigan[i]);
		}
	if (maxtemp==lakemichigan[i]){
			if(i>30 && i<=59)
			printf("Lake Michigan:%d/February temp:%0.2lf C\n",i-30,lakemichigan[i]);
		}
		if (maxtemp==lakemichigan[i]){
			if(i>59 && i<=90)
			printf("Lake Michigan:%d/March Temp:%0.2lf C\n",i-59,lakemichigan[i]);
		}
		if (maxtemp==lakemichigan[i]){
			if(i>90 && i<=120)
			printf("Lake Michigan:%d/April Temp:%0.2lf C\n",i-90,lakemichigan[i]);
		}
		if (maxtemp==lakemichigan[i]){
			if(i>120 && i<=151)
			printf("Lake Michigan:%d/May Temp:%0.2lf C\n",i-120,lakemichigan[i]);
		}
		if (maxtemp==lakemichigan[i]){
			if(i>151 && i<=181)
			printf("Lake Michigan:%d/june Temp:%0.2lf C\n",i-151,lakemichigan[i]);
		}
		if (maxtemp==lakemichigan[i]){
			if(i>181 && i<=212)
			printf("Lake Michigan:%d/July temp:%0.2lf C\n",i-181,lakemichigan[i]);
		}
		if (maxtemp==lakemichigan[i]){
			if(i>212 && i<=243)
			printf("Lake Michigan:%d/August Temp:%0.2lf C\n",i-212,lakemichigan[i]);
		}
		if (maxtemp==lakemichigan[i]){
			if(i>243 && i<=273)
			printf("Lake Michigan:%d/September Temp:%0.2lf C\n",i-243,lakemichigan[i]);
		}
		if (maxtemp==lakemichigan[i]){
			if(i>273 && i<=304)
			printf("Lake Michigan:%d/October Temp:%0.2lf C\n",i-273,lakemichigan[i]);
		}
		if (maxtemp==lakemichigan[i]){
			if(i>304 && i<=334)
			printf("Lake Michigan:%d/November Temp:%0.2lf C\n",i-304,lakemichigan[i]);
		}
		if (maxtemp==lakemichigan[i]){
			if(i>334 && i<=365)
			printf("Lake Michigan:%d/December Temp:%0.2lf C\n",i-334,lakemichigan[i]);
		}
		if (maxtemp==lakehuron[i]){
			if(i<=30)
			printf("Lake Huron:%d/January Temp:%0.2lf C\n",i+1,lakehuron[i]);
		}
	if (maxtemp==lakehuron[i]){
			if(i>30 && i<=59)
			printf("Lake Huron:%d/February temp:%0.2lf C\n",i-30,lakehuron[i]);
		}
		if (maxtemp==lakehuron[i]){
			if(i>59 && i<=90)
			printf("Lake Huron:%d/March Temp:%0.2lf C\n",i-59,lakehuron[i]);
		}
		if (maxtemp==lakehuron[i]){
			if(i>90 && i<=120)
			printf("Lake Huron:%d/April Temp:%0.2lf C\n",i-90,lakehuron[i]);
		}	
		if (maxtemp==lakehuron[i]){
			if(i>120 && i<=151)
			printf("Lake Huron:%d/May Temp:%0.2lf C\n",i-120,lakehuron[i]);
		}
		if (maxtemp==lakehuron[i]){
			if(i>151 && i<=181)
			printf("Lake Huron:%d/june Temp:%0.2lf C\n",i-151,lakehuron[i]);
		}
		if (maxtemp==lakehuron[i]){
			if(i>181 && i<=212)
			printf("Lake Huron:%d/July temp:%0.2lf C\n",i-181,lakehuron[i]);
		}
		if (maxtemp==lakehuron[i]){
			if(i>212 && i<=243)
			printf("Lake Huron:%d/August Temp:%0.2lf C\n",i-212,lakehuron[i]);
		}
		if (maxtemp==lakehuron[i]){
			if(i>243 && i<=273)
			printf("Lake Huron:%d/September Temp:%0.2lf C\n",i-243,lakehuron[i]);
		}
		if (maxtemp==lakehuron[i]){
			if(i>273 && i<=304)
			printf("Lake Huron:%d/October Temp:%0.2lf C\n",i-273,lakehuron[i]);
		}
		if (maxtemp==lakehuron[i]){
			if(i>304 && i<=334)
			printf("Lake Huron:%d/November Temp:%0.2lf C\n",i-304,lakehuron[i]);
		}
		if (maxtemp==lakehuron[i]){
			if(i>334 && i<=365)
			printf("Lake Huron:%d/December Temp:%0.2lf C\n",i-334,lakehuron[i]);
		}

		if (maxtemp==lakeerie[i]){
			if(i<=30)
			printf("Lake Erie:%d/January Temp:%0.2lf C\n",i+1,lakeerie[i]);
		}
	if (maxtemp==lakeerie[i]){
			if(i>30 && i<=59)
			printf("Lake Erie:%d/February temp:%0.2lf C\n",i-30,lakeerie[i]);
		}
		if (maxtemp==lakeerie[i]){
			if(i>59 && i<=90)
			printf("Lake Erie:%d/March Temp:%0.2lf C\n",i-59,lakeerie[i]);
		}
		if (maxtemp==lakeerie[i]){
			if(i>90 && i<=120)
			printf("Lake Erie:%d/April Temp:%0.2lf C\n",i-90,lakeerie[i]);
		}
		if (maxtemp==lakeerie[i]){
			if(i>120 && i<=151)
			printf("Lake Erie:%d/May Temp:%0.2lf C\n",i-120,lakeerie[i]);
		}
		if (maxtemp==lakeerie[i]){
			if(i>151 && i<=181)
			printf("Lake Erie:%d/june Temp:%0.2lf C\n",i-151,lakeerie[i]);
		}
		if (maxtemp==lakeerie[i]){
			if(i>181 && i<=212)
			printf("Lake Erie:%d/July temp:%0.2lf C\n",i-181,lakeerie[i]);
		}
		if (maxtemp==lakeerie[i]){
			if(i>212 && i<=243)
			printf("Lake Erie:%d/August Temp:%0.2lf C\n",i-212,lakeerie[i]);
		}
		if (maxtemp==lakeerie[i]){
			if(i>243 && i<=273)
			printf("Lake Erie:%d/September Temp:%0.2lf C\n",i-243,lakeerie[i]);
		}
		if (maxtemp==lakeerie[i]){
			if(i>273 && i<=304)
			printf("Lake Erie:%d/October Temp:%0.2lf C\n",i-273,lakeerie[i]);
		}
		if (maxtemp==lakeerie[i]){
			if(i>304 && i<=334)
			printf("Lake Erie:%d/November Temp:%0.2lf C\n",i-304,lakeerie[i]);
		}
		if (maxtemp==lakeerie[i]){
			if(i>334 && i<=365)
			printf("Lake Erie:%d/December Temp:%0.2lf C\n",i-334,lakeerie[i]);
		}
			if (maxtemp==lakeontario[i]){
			if(i<=30)
			printf("Lake Ontario:%d/January Temp:%0.2lf C\n",i+1,lakeontario[i]);
		}
	if (maxtemp==lakeontario[i]){
			if(i>30 && i<=59)
			printf("Lake Ontario:%d/February temp:%0.2lf C\n",i-30,lakeontario[i]);
		}
		if (maxtemp==lakeontario[i]){
			if(i>59 && i<=90)
			printf("Lake Ontario:%d/March Temp:%0.2lf C\n",i-59,lakeontario[i]);
		}
		if (maxtemp==lakeontario[i]){
			if(i>90 && i<=120)
			printf("Lake Ontario:%d/April Temp:%0.2lf C\n",i-90,lakeontario[i]);
		}
		if (maxtemp==lakeontario[i]){
			if(i>120 && i<=151)
			printf("Lake Ontario:%d/May Temp:%0.2lf C\n",i-120,lakeontario[i]);
		}
		if (maxtemp==lakeontario[i]){
			if(i>151 && i<=181)
			printf("Lake Ontario:%d/june Temp:%0.2lf C\n",i-151,lakeontario[i]);
		}
		if (maxtemp==lakeontario[i]){
			if(i>181 && i<=212)
			printf("Lake Ontario:%d/July temp:%0.2lf C\n",i-181,lakeontario[i]);
		}
		if (maxtemp==lakeontario[i]){
			if(i>212 && i<=243)
			printf("Lake Ontario:%d/August Temp:%0.2lf C\n",i-212,lakeontario[i]);
		}
		if (maxtemp==lakeontario[i]){
			if(i>243 && i<=273)
			printf("Lake Ontario:%d/September Temp:%0.2lf C\n",i-243,lakeontario[i]);
		}
		if (maxtemp==lakeontario[i]){
			if(i>273 && i<=304)
			printf("Lake Ontario:%d/October Temp:%0.2lf C\n",i-273,lakeontario[i]);
		}
		if (maxtemp==lakeontario[i]){
			if(i>304 && i<=334)
			printf("Lake Ontario:%d/November Temp:%0.2lf C\n",i-304,lakeontario[i]);
		}
		if (maxtemp==lakeontario[i]){
			if(i>334 && i<=365)
			printf("Lake Ontario:%d/December Temp:%0.2lf C\n",i-334,lakeontario[i]);
		}
				if (maxtemp==lakestclair[i]){
			if(i<=30)
			printf("Lake St.Clair:%d/January Temp:%0.2lf C\n",i+1,lakestclair[i]);
		}
	if (maxtemp==lakestclair[i]){
			if(i>30 && i<=59)
			printf("Lake St.Clair:%d/February temp:%0.2lf C\n",i-30,lakestclair[i]);
		}
		if (maxtemp==lakestclair[i]){
			if(i>59 && i<=90)
			printf("Lake St.Clair:%d/March Temp:%0.2lf C\n",i-59,lakestclair[i]);
		}
		if (maxtemp==lakestclair[i]){
			if(i>90 && i<=120)
			printf("Lake St.Clair:%d/April Temp:%0.2lf C\n",i-90,lakestclair[i]);
		}	
		if (maxtemp==lakestclair[i]){
			if(i>120 && i<=151)
			printf("Lake St.Clair:%d/May Temp:%0.2lf C\n",i-120,lakestclair[i]);
		}
		if (maxtemp==lakestclair[i]){
			if(i>151 && i<=181)
			printf("Lake St.Clair:%d/june Temp:%0.2lf C\n",i-151,lakestclair[i]);
		}
		if (maxtemp==lakestclair[i]){
			if(i>181 && i<=212)
			printf("Lake St.Clair:%d/July temp:%0.2lf C\n",i-181,lakestclair[i]);
		}
		if (maxtemp==lakestclair[i]){
			if(i>212 && i<=243)
			printf("Lake St.Clair:%d/August Temp:%0.2lf C\n",i-212,lakestclair[i]);
		}
		if (maxtemp==lakestclair[i]){
			if(i>243 && i<=273)
			printf("Lake St.Clair:%d/September Temp:%0.2lf C\n",i-243,lakestclair[i]);
		}
		if (maxtemp==lakestclair[i]){
			if(i>273 && i<=304)
			printf("Lake St.Clair:%d/October Temp:%0.2lf C\n",i-273,lakestclair[i]);
		}
		if (maxtemp==lakestclair[i]){
			if(i>304 && i<=334)
			printf("Lake St.Clair:%d/November Temp:%0.2lf C\n",i-304,lakestclair[i]);
		}
		if (maxtemp==lakestclair[i]){
			if(i>334 && i<=365)
			printf("Lake St.Clair:%d/December Temp:%0.2lf C\n",i-334,lakestclair[i]);
		}
	}
	double mins;
	mins = lakesuperior[0];
	
    for(i=1; i<366; i++)
    {
        if(lakesuperior[i]<mins)
        {
            mins = lakesuperior[i];
        }
    }
    double minm;
	minm = lakemichigan[0];
    for(i=1; i<366; i++)
    {
        if(lakemichigan[i]<minm)
        {
            minm = lakemichigan[i];
        }
    } 
    double minh;
	minh = lakehuron[0];
    for(i=1; i<366; i++)
    {
        if(lakehuron[i]<minh)
        {
            minh = lakehuron[i];
        }
    }
     double mine;
	mine = lakestclair[0];
    for(i=1; i<366; i++)
    {
        if(lakeerie[i]<mine)
        {
            mine = lakeerie[i];
        }
    }
    double mino;
	mino = lakeontario[0];
    for(i=1; i<366; i++)
    {
        if(lakeontario[i]<mino)
        {
            mino = lakeontario[i];
        }
    }
    double minc;
	minc = lakestclair[0];
    for(i=1; i<366; i++)
    {
        if(lakestclair[i]<minc)
        {
            minc = lakestclair[i];
        }
    }
    double mintemp=mins;
     if(mintemp>minm)
        {
           mintemp=minm;
        }
    if(minh<mintemp)
        {
            mintemp=minh;
        }
        if(mine<mintemp)
        {
            mintemp=mine;
        }
        if(mino<mintemp)
        {
            mintemp=mino;
        }
        if(minc<mintemp)
        {
            mintemp=minc;
        }
     printf("\nQuestion 4:\n");
     printf("Coldest temperature:\n");
    for(i=0;i<366;i++){
		if (mintemp==lakesuperior[i]){
			if(i<=30)
			printf("Lake Superior:%d/January Temp:%0.2lf C\n",i+1,lakesuperior[i]);
		}
	if (mintemp==lakesuperior[i]){
			if(i>30 && i<=59)
			printf("Lake Superior:%d/February temp:%0.2lf C\n",i-30,lakesuperior[i]);
		}
		if (mintemp==lakesuperior[i]){
			if(i>59 && i<=90)
			printf("Lake Superior:%d/March Temp:%0.2lf C\n",i-59,lakesuperior[i]);
		}
		if (mintemp==lakesuperior[i]){
			if(i>90 && i<=120)
			printf("Lake Superior:%d/April Temp:%0.2lf C\n",i-90,lakesuperior[i]);
		}	
		if (mintemp==lakesuperior[i]){
			if(i>120 && i<=151)
			printf("Lake Superior:%d/May Temp:%0.2lf C\n",i-120,lakesuperior[i]);
		}
		if (mintemp==lakesuperior[i]){
			if(i>151 && i<=181)
			printf("Lake Superior:%d/june Temp:%0.2lf C\n",i-151,lakesuperior[i]);
		}
		if (mintemp==lakesuperior[i]){
			if(i>181 && i<=212)
			printf("Lake Superior:%d/July temp:%0.2lf C\n",i-181,lakesuperior[i]);
		}
		if (mintemp==lakesuperior[i]){
			if(i>212 && i<=243)
			printf("Lake Superior:%d/August Temp:%0.2lf C\n",i-212,lakesuperior[i]);
		}
		if (mintemp==lakesuperior[i]){
			if(i>243 && i<=273)
			printf("Lake Superior:%d/September Temp:%0.2lf C\n",i-242,lakesuperior[i]);
		}
		if (mintemp==lakesuperior[i]){
			if(i>273 && i<=304)
			printf("Lake Superior:%d/October Temp:%0.2lf C\n",i-273,lakesuperior[i]);
		}
		if (mintemp==lakesuperior[i]){
			if(i>304 && i<=334)
			printf("Lake Superior:%d/November Temp:%0.2lf C\n",i-303,lakesuperior[i]);
		}
		if (mintemp==lakesuperior[i]){
			if(i>334 && i<=365)
			printf("Lake Superior:%d/December Temp:%0.2lf C\n",i-335,lakesuperior[i]);
		}

		if (mintemp==lakemichigan[i]){
			if(i<=30)
			printf("Lake Michigan:%d/January Temp:%0.2lf C\n",i+1,lakemichigan[i]);
		}
	if (mintemp==lakemichigan[i]){
			if(i>30 && i<=59)
			printf("Lake Michigan:%d/February temp:%0.2lf C\n",i-30,lakemichigan[i]);
		}
		if (mintemp==lakemichigan[i]){
			if(i>59 && i<=90)
			printf("Lake Michigan:%d/March Temp:%0.2lf C\n",i-59,lakemichigan[i]);
		}
		if (mintemp==lakemichigan[i]){
			if(i>90 && i<=120)
			printf("Lake Michigan:%d/April Temp:%0.2lf C\n",i-90,lakemichigan[i]);
		}
		if (mintemp==lakemichigan[i]){
			if(i>120 && i<=151)
			printf("Lake Michigan:%d/May Temp:%0.2lf C\n",i-120,lakemichigan[i]);
		}
		if (mintemp==lakemichigan[i]){
			if(i>151 && i<=181)
			printf("Lake Michigan:%d/june Temp:%0.2lf C\n",i-151,lakemichigan[i]);
		}
		if (mintemp==lakemichigan[i]){
			if(i>181 && i<=212)
			printf("Lake Michigan:%d/July temp:%0.2lf C\n",i-181,lakemichigan[i]);
		}
		if (mintemp==lakemichigan[i]){
			if(i>212 && i<=243)
			printf("Lake Michigan:%d/August Temp:%0.2lf C\n",i-212,lakemichigan[i]);
		}
		if (mintemp==lakemichigan[i]){
			if(i>243 && i<=273)
			printf("Lake Michigan:%d/September Temp:%0.2lf C\n",i-243,lakemichigan[i]);
		}
		if (mintemp==lakemichigan[i]){
			if(i>273 && i<=304)
			printf("Lake Michigan:%d/October Temp:%0.2lf C\n",i-273,lakemichigan[i]);
		}
		if (mintemp==lakemichigan[i]){
			if(i>304 && i<=334)
			printf("Lake Michigan:%d/November Temp:%0.2lf C\n",i-304,lakemichigan[i]);
		}
		if (mintemp==lakemichigan[i]){
			if(i>334 && i<=365)
			printf("Lake Michigan:%d/December Temp:%0.2lf C\n",i-334,lakemichigan[i]);
		}
		if (mintemp==lakehuron[i]){
			if(i<=30)
			printf("Lake Huron:%d/January Temp:%0.2lf C\n",i+1,lakehuron[i]);
		}
	if (mintemp==lakehuron[i]){
			if(i>30 && i<=59)
			printf("Lake Huron:%d/February temp:%0.2lf C\n",i-30,lakehuron[i]);
		}
		if (mintemp==lakehuron[i]){
			if(i>59 && i<=90)
			printf("Lake Huron:%d/March Temp:%0.2lf C\n",i-59,lakehuron[i]);
		}
		if (mintemp==lakehuron[i]){
			if(i>90 && i<=120)
			printf("Lake Huron:%d/April Temp:%0.2lf C\n",i-90,lakehuron[i]);
		}	
		if (mintemp==lakehuron[i]){
			if(i>120 && i<=151)
			printf("Lake Huron:%d/May Temp:%0.2lf C\n",i-120,lakehuron[i]);
		}
		if (mintemp==lakehuron[i]){
			if(i>151 && i<=181)
			printf("Lake Huron:%d/june Temp:%0.2lf C\n",i-151,lakehuron[i]);
		}
		if (mintemp==lakehuron[i]){
			if(i>181 && i<=212)
			printf("Lake Huron:%d/July temp:%0.2lf C\n",i-181,lakehuron[i]);
		}
		if (mintemp==lakehuron[i]){
			if(i>212 && i<=243)
			printf("Lake Huron:%d/August Temp:%0.2lf C\n",i-212,lakehuron[i]);
		}
		if (mintemp==lakehuron[i]){
			if(i>243 && i<=273)
			printf("Lake Huron:%d/September Temp:%0.2lf C\n",i-243,lakehuron[i]);
		}
		if (mintemp==lakehuron[i]){
			if(i>273 && i<=304)
			printf("Lake Huron:%d/October Temp:%0.2lf C\n",i-273,lakehuron[i]);
		}
		if (mintemp==lakehuron[i]){
			if(i>304 && i<=334)
			printf("Lake Huron:%d/November Temp:%0.2lf C\n",i-304,lakehuron[i]);
		}
		if (mintemp==lakehuron[i]){
			if(i>334 && i<=365)
			printf("Lake Huron:%d/December Temp:%0.2lf C\n",i-334,lakehuron[i]);
		}

		if (mintemp==lakeerie[i]){
			if(i<=30)
			printf("Lake Erie:%d/January Temp:%0.2lf C\n",i+1,lakeerie[i]);
		}
	if (mintemp==lakeerie[i]){
			if(i>30 && i<=59)
			printf("Lake Erie:%d/February temp:%0.2lf C\n",i-30,lakeerie[i]);
		}
		if (mintemp==lakeerie[i]){
			if(i>59 && i<=90)
			printf("Lake Erie:%d/March Temp:%0.2lf C\n",i-59,lakeerie[i]);
		}
		if (mintemp==lakeerie[i]){
			if(i>90 && i<=120)
			printf("Lake Erie:%d/April Temp:%0.2lf C\n",i-90,lakeerie[i]);
		}
		if (mintemp==lakeerie[i]){
			if(i>120 && i<=151)
			printf("Lake Erie:%d/May Temp:%0.2lf C\n",i-120,lakeerie[i]);
		}
		if (mintemp==lakeerie[i]){
			if(i>151 && i<=181)
			printf("Lake Erie:%d/june Temp:%0.2lf C\n",i-151,lakeerie[i]);
		}
		if (mintemp==lakeerie[i]){
			if(i>181 && i<=212)
			printf("Lake Erie:%d/July temp:%0.2lf C\n",i-181,lakeerie[i]);
		}
		if (mintemp==lakeerie[i]){
			if(i>212 && i<=243)
			printf("Lake Erie:%d/August Temp:%0.2lf C\n",i-212,lakeerie[i]);
		}
		if (mintemp==lakeerie[i]){
			if(i>243 && i<=273)
			printf("Lake Erie:%d/September Temp:%0.2lf C\n",i-242,lakeerie[i]);
		}
		if (mintemp==lakeerie[i]){
			if(i>273 && i<=304)
			printf("Lake Erie:%d/October Temp:%0.2lf C\n",i-273,lakeerie[i]);
		}
		if (mintemp==lakeerie[i]){
			if(i>304 && i<=334)
			printf("Lake Erie:%d/November Temp:%0.2lf C\n",i-304,lakeerie[i]);
		}
		if (mintemp==lakeerie[i]){
			if(i>334 && i<=365)
			printf("Lake Erie:%d/December Temp:%0.2lf C\n",i-334,lakeerie[i]);
		}
			if (mintemp==lakeontario[i]){
			if(i<=30)
			printf("Lake Ontario:%d/January Temp:%0.2lf C\n",i+1,lakeontario[i]);
		}
	if (mintemp==lakeontario[i]){
			if(i>30 && i<=59)
			printf("Lake Ontario:%d/February temp:%0.2lf C\n",i-30,lakeontario[i]);
		}
		if (mintemp==lakeontario[i]){
			if(i>59 && i<=90)
			printf("Lake Ontario:%d/March Temp:%0.2lf C\n",i-59,lakeontario[i]);
		}
		if (mintemp==lakeontario[i]){
			if(i>90 && i<=120)
			printf("Lake Ontario:%d/April Temp:%0.2lf C\n",i-90,lakeontario[i]);
		}
		if (mintemp==lakeontario[i]){
			if(i>120 && i<=151)
			printf("Lake Ontario:%d/May Temp:%0.2lf C\n",i-120,lakeontario[i]);
		}
		if (mintemp==lakeontario[i]){
			if(i>151 && i<=181)
			printf("Lake Ontario:%d/june Temp:%0.2lf C\n",i-151,lakeontario[i]);
		}
		if (mintemp==lakeontario[i]){
			if(i>181 && i<=212)
			printf("Lake Ontario:%d/July temp:%0.2lf C\n",i-181,lakeontario[i]);
		}
		if (mintemp==lakeontario[i]){
			if(i>212 && i<=243)
			printf("Lake Ontario:%d/August Temp:%0.2lf C\n",i-212,lakeontario[i]);
		}
		if (mintemp==lakeontario[i]){
			if(i>243 && i<=273)
			printf("Lake Ontario:%d/September Temp:%0.2lf C\n",i-243,lakeontario[i]);
		}
		if (mintemp==lakeontario[i]){
			if(i>273 && i<=304)
			printf("Lake Ontario:%d/October Temp:%0.2lf C\n",i-273,lakeontario[i]);
		}
		if (mintemp==lakeontario[i]){
			if(i>303 && i<=334)
			printf("Lake Ontario:%d/November Temp:%0.2lf C\n",i-303,lakeontario[i]);
		}
		if (mintemp==lakeontario[i]){
			if(i>334 && i<=365)
			printf("Lake Ontario:%d/December Temp:%0.2lf C\n",i-334,lakeontario[i]);
		}
				if (mintemp==lakestclair[i]){
			if(i<=30)
			printf("Lake St.Clair:%d/January Temp:%0.2lf C\n",i+1,lakestclair[i]);
		}
	if (mintemp==lakestclair[i]){
			if(i>30 && i<=59)
			printf("Lake St.Clair:%d/February temp:%0.2lf C\n",i-30,lakestclair[i]);
		}
		if (mintemp==lakestclair[i]){
			if(i>59 && i<=90)
			printf("Lake St.Clair:%d/March Temp:%0.2lf C\n",i-59,lakestclair[i]);
		}
		if (mintemp==lakestclair[i]){
			if(i>90 && i<=120)
			printf("Lake St.Clair:%d/April Temp:%0.2lf C\n",i-90,lakestclair[i]);
		}	
		if (mintemp==lakestclair[i]){
			if(i>120 && i<=151)
			printf("Lake St.Clair:%d/May Temp:%0.2lf C\n",i-120,lakestclair[i]);
		}
		if (mintemp==lakestclair[i]){
			if(i>151 && i<=181)
			printf("Lake St.Clair:%d/june Temp:%0.2lf C\n",i-151,lakestclair[i]);
		}
		if (mintemp==lakestclair[i]){
			if(i>181 && i<=212)
			printf("Lake St.Clair:%d/July temp:%0.2lf C\n",i-181,lakestclair[i]);
		}
		if (mintemp==lakestclair[i]){
			if(i>212 && i<=243)
			printf("Lake St.Clair:%d/August Temp:%0.2lf C\n",i-212,lakestclair[i]);
		}
		if (mintemp==lakestclair[i]){
			if(i>243 && i<=273)
			printf("Lake St.Clair:%d/September Temp:%0.2lf C\n",i-243,lakestclair[i]);
		}
		if (mintemp==lakestclair[i]){
			if(i>273 && i<=304)
			printf("Lake St.Clair:%d/October Temp:%0.2lf C\n",i-273,lakestclair[i]);
		}
		if (mintemp==lakestclair[i]){
			if(i>304 && i<=334)
			printf("Lake St.Clair:%d/November Temp:%0.2lf C\n",i-304,lakestclair[i]);
		}
		if (mintemp==lakestclair[i]){
			if(i>334 && i<=365)
			printf("Lake St.Clair:%d/December Temp:%0.2lf C\n",i-334,lakestclair[i]);
		}
	}

    return(0);
}
double Question_3cold(double lakevalues[]){
    
    double coldtemp;
    coldtemp = lakevalues[0];
    int coldcount=0;
	int colddatesort[366];
	
    for (int i=0; i <366; i++){
        if (lakevalues[i] < coldtemp){
            coldtemp = lakevalues[i];
        }
    }
	for (int i=0; i <366; i++){
		if (coldtemp == lakevalues[i])
		{
			colddatesort[coldcount]=0;
			colddatesort[coldcount] = i+1;
			coldcount+=1;
	}
	}
	int monthsortcold[coldcount];
	char month[][10] = {"January", "February", "March", "April ", "May ", "June", "July", "August", "September", "October", "November", "December"};
    for (int j = 0; j<coldcount ; j++){
		monthsortcold[j] = 0;
		for(int i = 1; i<13; i++){
			if (colddatesort[j]<30)
			{
				break;
			}
        else if ((i == 1) || (i == 3) || (i == 5) || (i == 7) || (i == 8) || (i == 10) || (i == 12)){
            colddatesort[j] -= 31;
            monthsortcold[j] = monthsortcold[j]+1;  
       }
       else if ((i == 4) || (i == 6) || (i == 9) || (i == 11) ){
            colddatesort[j] -= 30;
            monthsortcold[j] = monthsortcold[j]+1;  
        }
        else if (i==2){
            colddatesort[j] -= 29;
            monthsortcold[j] = monthsortcold[j]+1;  
        }
    }
}
	printf("\nColdest Temperature Dates\n(Total Matching Dates: %d): \n",coldcount);
	printf("\nDay/Month \n");
	for(int i = 0; i<coldcount; i++){
	int test= monthsortcold[i];
    printf("%.2d/%s\n", colddatesort[i], month[test]);

    
}
return coldtemp;
}
double Question_3warm(double lakevalues[]){


	double warmtemp=0;
    warmtemp = lakevalues[0];
    int warmcount=0;
	int warmdatesort[366];
	
    for (int i=0; i <366; i++){
        if (lakevalues[i] > warmtemp){
            warmtemp = lakevalues[i];
            
        }
    }
	for (int i=0; i <366; i++){
		if (warmtemp == lakevalues[i])
		{
			warmdatesort[warmcount]=0;
			warmdatesort[warmcount] = i+1;
			warmcount+=1;

	}

	}
    int monthsortwarm[warmcount];
	char month[][10] = {"January", "February", "March", "April ", "May ", "June", "July", "August", "September", "October", "November", "December"};
    for (int j = 0; j<warmcount ; j++){
		monthsortwarm[j] = 0;
		for(int i = 1; i<13; i++){
			if (warmdatesort[j]<30)
			{
				break;
			}
        else if ((i == 1) || (i == 3) || (i == 5) || (i == 7) || (i == 8) || (i == 10) || (i == 12)){
            warmdatesort[j] -= 31;
            monthsortwarm[j] = monthsortwarm[j]+1;  
       }
       else if ((i == 4) || (i == 6) || (i == 9) || (i == 11) ){
            warmdatesort[j] -= 30;
            monthsortwarm[j] = monthsortwarm[j]+1;  
        }
        else if (i==2){
            warmdatesort[j] -= 29;
            monthsortwarm[j] = monthsortwarm[j]+1;  
        }
    }
}



	printf("\nWarmest Temperature Dates\n(Total Matching Dates: %d): \n",warmcount);
	printf("\nDay/Month \n");
	for(int i = 0; i<warmcount; i++){
	int test= monthsortwarm[i];
    printf("%.2d/%s\n", warmdatesort[i], month[test]);
}
return warmtemp;
}
int Question_5(int n1[], int n2[], double n3[], double n4[], double n5[], double n6[], double n7[], double n8[], double n9[])
{
	
    double a=0; //Setting a-f
    double b=0;
    double c=0;
    double d=0;
    double e=0;
    double f=0;
    
    for (int i = 171; i <265; i++){
        a += n3[i];
        b += n4[i];
        c += n5[i];
        d += n6[i];
        e += n7[i];
        f += n8[i];
    }
    double sup, mich, hur, er, on, st;
    sup = a/(265-171);
    mich = b/(265-171);
    hur = c/(265-171);
    er = d/(265-171);
    on = e/(265-171);
    st = f/(265-171);
    double descendingarray [6]= {sup, mich, hur, er, on, st};
    char lakename[6][50] = {"Superior", "Michigan", "Huron", "Erie ", "Ontario ", "St.Clair"};
    char lakenameq2[6][50] = {"Superior", "Michigan", "Huron", "Erie ", "Ontario ", "St.Clair"};
    
    double temp=0;
    double temp2=0;
	char laketemp[50];
	char laketemp2[50];
	
    for (int i = 0; i < 6; i++) {     
        for (int j = i+1; j < 6; j++) {     
           if(descendingarray[i] < descendingarray[j]) {    
               temp = descendingarray[i];
               descendingarray[i] = descendingarray[j];   
               descendingarray[j] = temp;
               

               
				strcpy(laketemp, lakename[i]);
				strcpy(lakename[i], lakename[j]);
				strcpy(lakename[j], laketemp);
				

           }     
        }     
    }
     for (int i = 0; i < 6; i++) {     
        for (int j = i+1; j < 6; j++) {     
           if(n9[i] < n9[j]) {    

               
               temp2 = n9[i];
               n9[i] = n9[j];   
               n9[j] = temp2;
               

				
				strcpy(laketemp2, lakenameq2[i]);
				strcpy(lakenameq2[i], lakenameq2[j]);
				strcpy(lakenameq2[j], laketemp2);
           }     
        }     
    }    
    printf("Question 5:\nAverage Lake Temperature in summer 2020 warmest to coldest:\n");
 for (int i = 0; i < 6; i++) {     
        printf("Lake %s %.2lf C\n", lakename[i],descendingarray[i]);    
    }    
    printf("\nQ2 Yearly Avg Descending\n\n");
     for (int i = 0; i < 6; i++) {     
        printf("Lake %s %.2lf C\n", lakenameq2[i],n9[i]);    
    }    

	int result;
	
	result = strcmp(lakename[0], lakenameq2[0]);
	if (result == 0){
		printf("\nThe Descending Order For Summer 2020 is the same for yearly average\n");
		
	}
		else if (result == 1){
		printf("\nThe Descending Order For Summer 2020 is not the same for yearly average\n");
	}
    printf("\n\n");
    return 0;
}

int Question_6(int n1[], int n2[], double n3[], double n4[], double n5[], double n6[], double n7[], double n8[],double n9[])
{
    double a=0;
    double b=0;
    double c=0;
    double d=0;
    double e=0;
    double f=0;
    
    for (int i = 0; i <79; i++){
        a += n3[i];
        b += n4[i];
        c += n5[i];
        d += n6[i];
        e += n7[i];
        f += n8[i];
    }
    for (int i = 354; i <366; i++){
        a += n3[i];
        b += n4[i];
        c += n5[i];
        d += n6[i];
        e += n7[i];
        f += n8[i];
    }
    double sup, mich, hur, er, on, st;
    sup = a/(366-354+79);
    mich = b/(366-354+79);
    hur = c/(366-354+79);
    er = d/(366-354+79);
    on = e/(366-354+79);
    st = f/(366-354+79);
    double descendingarray [6]= {sup, mich, hur, er, on, st};
    char lakename[6][50] = {"Superior", "Michigan", "Huron", "Erie ", "Ontario ", "St.Clair"};
    char lakenameq2[6][50] = {"Superior", "Michigan", "Huron", "Erie ", "Ontario ", "St.Clair"};
    
    double temp=0;
    double temp2=0;
	char laketemp[50];
	char laketemp2[50];
	
    for (int i = 0; i < 6; i++) {     
        for (int j = i+1; j < 6; j++) {     
           if(descendingarray[i] < descendingarray[j]) {    
               temp = descendingarray[i];
               descendingarray[i] = descendingarray[j];   
               descendingarray[j] = temp;
               

               
				strcpy(laketemp, lakename[i]);
				strcpy(lakename[i], lakename[j]);
				strcpy(lakename[j], laketemp);
				

           }     
        }     
    }
     for (int i = 0; i < 6; i++) {     
        for (int j = i+1; j < 6; j++) {     
           if(n9[i] < n9[j]) {    

               
               temp2 = n9[i];
               n9[i] = n9[j];   
               n9[j] = temp2;
               

				
				strcpy(laketemp2, lakenameq2[i]);
				strcpy(lakenameq2[i], lakenameq2[j]);
				strcpy(lakenameq2[j], laketemp2);
           }     
        }     
    }
     
    printf("Question 6:\nAverage Lake Temperature in Winter 2020 warmest to coldest:\n");
 for (int i = 0; i < 6; i++) {     
        printf("Lake %s %.2lf C\n", lakename[i],descendingarray[i]);    
    }    
    printf("\nQ2 Yearly Avg Descending\n\n");
     for (int i = 0; i < 6; i++) {     
        printf("Lake %s %.2lf C\n", lakenameq2[i],n9[i]);    
    }    

	int result;

	result = strcmp(lakename[0], lakenameq2[0]);
	if (result == 0){
		printf("\nThe Descending Order For Winter 2020 is the same for yearly average\n");
		
	}
		else if (result == 1){
		printf("\nThe Descending Order For Winter 2020 is not the same for yearly average\n");
	}
    printf("\n\n");
    return 0;
}
int Question_7(int n1[], int n2[], double n3[], double n4[], double n5[], double n6[], double n7[], double n8[])
{
	int superiorcount=0, michigancount=0, huroncount=0, eriecount=0, ontariocount=0, stclaircount=0;
	for (int i = 0; i < 366; i++){
		
	if (n3 [i] > 20){
			superiorcount = superiorcount + 1;
		}
		if (n4 [i] > 20){
			michigancount = michigancount + 1;
		}
		if (n5 [i] > 20){
			huroncount = huroncount + 1;
		}
		if (n6 [i] > 20){
			eriecount = eriecount + 1;
		}
		if (n7 [i] > 20){
			ontariocount = ontariocount + 1;
		}
		if (n8 [i] > 20){
			stclaircount = stclaircount + 1;
		}
		
	}
	printf ("Question 7 \n");
	printf ("For Lake Superior, you can swim for :%d days\n", superiorcount);
	printf ("For Lake Michigan, you can swim for :%d days\n", michigancount);
	printf ("For Lake Huron, you can swim for :%d days\n", huroncount);
	printf ("For Lake Erie, you can swim for :%d days\n", eriecount);
	printf ("For Lake Ontario, you can swim for :%d days\n", ontariocount);
	printf ("For Lake St. Clair, you can swim for :%d days\n", stclaircount);
	return 0;
}
int Question8(double lakesuperior[],double lakemichigan[],double lakehuron[],double lakeerie[],double lakeontario[],double lakestclair[],int *FOntario,int *FErie, int *FHuron, int *FMichigan, int *FSuperior, int *FClair){
    int xi;
    
    for(xi=0;xi<366;xi++){
        if(lakesuperior[xi]<0){
            *FSuperior=*FSuperior+1;
        }
        if(lakemichigan[xi]<0){
            *FMichigan=*FMichigan+1;
        }    
        if(lakehuron[xi]<0){
            *FHuron=*FHuron+1;
    }
        if(lakeerie[xi]<0){
            *FErie=*FErie+1;
        }
        if(lakeontario[xi]<0){
            *FOntario=*FOntario+1;
        }
        if(lakestclair[xi]<0){
            *FClair=*FClair+1;
}
}
return 0;
}

double Question9(double xelakesuperior[],double xelakemichigan[],double xelakehuron[],double xelakeerie[],double xelakeontario[],double xelakestclair[],double *XdAverage,double *XdOntario,double *XdErie, double *XdHuron, double *XdMichigan, double *XdSuperior, double *XdClair){
	int xp;
	double XCOntario=0, XCErie=0, XCHuron=0, XCMichigan=0, XCSuperior=0, XCClair=0;
	
	for (xp=0;xp<365;xp++){
	XCOntario=XCOntario+xelakeontario[xp];
	XCErie=XCErie+xelakeerie[xp];
	XCHuron=XCHuron+xelakehuron[xp];
	XCMichigan=XCMichigan+xelakemichigan[xp];
	XCSuperior=XCSuperior+xelakesuperior[xp];
	XCClair=XCClair+xelakestclair[xp];
	}
	*XdOntario=XCOntario/365;
	*XdErie=XCErie/365;
	*XdSuperior=XCSuperior/365;
	*XdHuron=XCHuron/365;
	*XdClair=XCClair/365;
	*XdMichigan=XCMichigan/365;
	*XdAverage=(XCOntario+XCErie+XCSuperior+XCHuron+XCClair+XCMichigan)/(365*6);
	return 0;
}

int main(void)
{
    int xeyear[365], xeday[365]; 
    double xelakesuperior[365], xelakemichigan[365], xelakehuron[365], xelakeerie[365], xelakeontario[365], xelakestclair[365];
    
    FILE *datafile = fopen("glsea-temps2019_1024.dat", "r");
    
    
        int x = 0;
        while( x<10){
            char buffer[100];
            fgets(buffer, 100, datafile);
            x++;
}
        for (int i = 0; i <365; i++){
        fscanf(datafile, "%d %d %lf %lf %lf %lf %lf %lf", &xeyear[i], &xeday[i], &xelakesuperior[i], &xelakemichigan[i], &xelakehuron[i], &xelakeerie[i], &xelakeontario[i], &xelakestclair[i]);    
    }
    fclose(datafile);
    int year[366], day[366]; 
    double lakesuperior[366], lakemichigan[366], lakehuron[366], lakeerie[366], lakeontario[366], lakestclair[366];
    
    FILE *datafile2 = fopen("glsea-temps2020_1024.dat", "r");
    int y = 0;
        while( y<10){
            char buffer[100];
            fgets(buffer, 100, datafile);
            y++;
}
        for (int i = 0; i <366; i++){
        fscanf(datafile2, "%d %d %lf %lf %lf %lf %lf %lf", &year[i], &day[i], &lakesuperior[i], &lakemichigan[i], &lakehuron[i], &lakeerie[i], &lakeontario[i], &lakestclair[i]);    
    }
    fclose(datafile);
    double XbAverage, XbOntario, XbErie, XbHuron, XbMichigan, XbSuperior, XbClair, varray[5];
    printf("Question 1:\n");
    Question1(lakesuperior, lakemichigan, lakehuron, lakeerie, lakeontario, lakestclair, &XbAverage, &XbOntario, &XbErie, &XbHuron, &XbMichigan, &XbSuperior, &XbClair);
    printf("The average temperature across the year 2020 of lake superior is %0.2lf degrees Celcius.\n",XbSuperior);
    printf("The average temperature across the year 2020 of lake Michigan is %0.2lf degrees Celcius.\n",XbMichigan);
    printf("The average temperature across the year 2020 of lake Huron is %0.2lf degrees Celcius.\n",XbHuron);
    printf("The average temperature across the year 2020 of lake Erie is %0.2lf degrees Celcius.\n",XbErie);
    printf("The average temperature across the year 2020 of lake Ontario is %0.2lf degrees Celcius.\n",XbOntario);
    printf("The average temperature across the year 2020 of lake St. Clair is %0.2lf degrees Celcius.\n",XbClair);
    printf("The average temperature across the year 2020 of all the lakes combined is %0.2lf degrees Celcius.\n",XbAverage);
	printf("====================================================================================================================\n");
	printf("Question 2:\n");
    Question2(XbAverage, XbOntario, XbErie, XbHuron, XbMichigan, XbSuperior, XbClair, varray);
    printf("====================================================================================================================\n");
    //QUESTION 3//
    printf("Question 3:\n");
    double q3superiorwarm=Question_3warm(lakesuperior);
	double q3superiorcold=Question_3cold(lakesuperior);
	
	printf("The Coldest Temperature for Lake Superior is %.2lf\n", q3superiorwarm);
	printf("The Warmest Temperature for Lake Superior is %.2lf\n", q3superiorcold);
	printf("----------------------------------------------------------------------------------------------------------------\n");
    double q3michiganwarm=Question_3warm(lakemichigan);
	double q3michigancold=Question_3cold(lakemichigan);
	
	printf("The Coldest Temperature for Lake Michigan is %.2lf\n", q3michiganwarm);
	printf("The Warmest Temperature for Lake Michigan is %.2lf\n", q3michigancold);
	printf("----------------------------------------------------------------------------------------------------------------\n");
    double q3huronwarm=Question_3warm(lakehuron);
	double q3huroncold=Question_3cold(lakehuron);
	
	printf("The Coldest Temperature for Lake Huron is %.2lf\n", q3huronwarm);
	printf("The Warmest Temperature for Lake Huron is %.2lf\n", q3huroncold);
	printf("----------------------------------------------------------------------------------------------------------------\n");
    double q3eriewarm=Question_3warm(lakeerie);
	double q3eriecold=Question_3cold(lakeerie);
	
	printf("The Coldest Temperature for Lake Erie is %.2lf\n", q3eriewarm);
	printf("The Warmest Temperature for Lake Erie is %.2lf\n", q3eriecold);
	printf("----------------------------------------------------------------------------------------------------------------\n");
	double q3ontariowarm=Question_3warm(lakeontario);
	double q3ontariocold=Question_3cold(lakeontario);
	
	printf("The Coldest Temperature for Lake Ontario is %.2lf\n", q3ontariowarm);
	printf("The Warmest Temperature for Lake Ontario is %.2lf\n", q3ontariocold);
	printf("----------------------------------------------------------------------------------------------------------------\n");
	double q3stclairwarm=Question_3warm(lakestclair);
	double q3stclaircold=Question_3cold(lakestclair);
	
	printf("The Coldest Temperature for Lake St. Clair is %.2lf\n", q3stclaircold);
	printf("The Warmest Temperature for Lake St. Clair is %.2lf\n", q3stclairwarm);
	printf("====================================================================================================================\n");
	//question 4//
	
	Question4( lakesuperior, lakemichigan, lakehuron, lakeerie, lakeontario, lakestclair);
	//end question 4//
	printf("====================================================================================================================\n");
    double lakeunsorted5[6]= {XbSuperior,XbMichigan,XbHuron,XbErie,XbOntario,XbClair};
    double lakeunsorted6[6]= {XbSuperior,XbMichigan,XbHuron,XbErie,XbOntario,XbClair};
    
    Question_5(year , day, lakesuperior, lakemichigan, lakehuron, lakeerie, lakeontario, lakestclair,lakeunsorted5);
    printf("====================================================================================================================\n");
    Question_6(year , day, lakesuperior, lakemichigan, lakehuron, lakeerie, lakeontario, lakestclair,lakeunsorted6);
    printf("====================================================================================================================\n");
    Question_7(year , day, lakesuperior, lakemichigan, lakehuron, lakeerie, lakeontario, lakestclair);
    printf("====================================================================================================================\n");
    //QUESTION 8//
    printf("Question 8\n");
    int FOntario, FErie, FHuron, FMichigan, FSuperior, FClair;
    Question8(lakesuperior, lakemichigan, lakehuron, lakeerie, lakeontario, lakestclair, &FOntario, &FErie, &FHuron, &FMichigan, &FSuperior, &FClair);
    printf("Throughout the year 2020 Lake Superior Froze a total of %d days.\n", FSuperior);
    printf("Throughout the year 2020 Lake Michigan Froze a total of %d days.\n", FMichigan);
    printf("Throughout the year 2020 Lake Huron Froze a total of %d days.\n", FHuron);
    printf("Throughout the year 2020 Lake Erie Froze a total of %d days.\n", FErie);
    printf("Throughout the year 2020 Lake Ontario Froze a total of %d days.\n", FOntario);
    printf("Throughout the year 2020 Lake St. Clair Froze a total of %d days.\n", FClair);
    printf("====================================================================================================================\n");
    printf("Question 9\n");
double XdAverage, XdOntario, XdErie, XdHuron, XdMichigan, XdSuperior, XdClair;
    Question9(xelakesuperior, xelakemichigan, xelakehuron, xelakeerie, xelakeontario, xelakestclair, &XdAverage, &XdOntario, &XdErie, &XdHuron, &XdMichigan, &XdSuperior, &XdClair);
 
printf("                        _________________________________________________________________________________\n");
printf("                        |  Superior  |  Michigan  |  Huron  |  Erie  |  Ontario  |  St Clair  |  All 6  |\n");
printf("                        |____________|____________|_________|________|___________|____________|_________|\n");
printf("Average_temperature_2019|    %4.2lf    |    %4.2lf    |   %4.2lf  |  %4.2lf |    %4.2lf   |    %4.2lf   |   %4.2lf  |\n",XdSuperior,XdMichigan,XdHuron,XdErie,XdOntario,XdClair,XdAverage);
printf("                        |____________|____________|_________|________|___________|____________|_________|\n");
printf("Average_temperature_2020|    %4.2lf    |   %4.2lf    |   %4.2lf  |  %4.2lf |   %4.2lf   |    %4.2lf   |  %4.2lf  |\n",XbSuperior,XbMichigan,XbHuron,XbErie,XbOntario,XbClair,XbAverage);
printf("                        |____________|____________|_________|________|___________|____________|_________|\n");


char lakename[6][50] = {"Superior", "Michigan", "Huron", "Erie ", "Ontario ", "St.Clair"};
double nineteen[6]={XdSuperior,XdMichigan,XdHuron,XdErie,XdOntario,XdClair};
double twenty[6]={XbSuperior,XbMichigan,XbHuron,XbErie,XbOntario,XbClair};
double result=0;
double diff=0;
printf("\n");
for (int i = 0; i < 6; i++) {  
	
	result = ((twenty[i]-nineteen[i])/nineteen[i])*100;
	diff = twenty[i]-nineteen[i];
	printf("Lake %s Increase Percentage: %.2lf%% Difference: %.2lf\n",lakename[i],result,diff);
}
return (0);
}
