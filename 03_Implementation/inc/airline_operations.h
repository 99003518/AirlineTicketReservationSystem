#ifndef __AIRLINE_OPERATIONS_H__
#define __AIRLINE_OPERATIONS_H__

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void reservation(void);							//main reservation function
void viewdetails(void);							//view details of all the flight
void printticket(char name[],int,char class_pref[],int,float);	//print ticket
void specificflight(int);						//print data related to specific flight
float charge(int,int);							//charge calculated automatically w.r.t number of seats and flight
void login();
int userLogin (char uname[10],char pword[10]);

#endif                                              // __AIRLINE_OPERATIONS_H__
