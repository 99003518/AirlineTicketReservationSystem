#ifndef __AIRLINE_OPERATIONS_H__
#define __AIRLINE_OPERATIONS_H__

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

int reservation();							//main reservation function
int viewdetails();							//view details of all the flight
int printticket(char name[],int,char class_pref[],int,float);	//print ticket
int specificflight();						//print data related to specific flight
float charge(int,int);							//charge calculated automatically w.r.t number of seats and flight
void login();

#endif                                              // __AIRLINE_OPERATIONS_H__
