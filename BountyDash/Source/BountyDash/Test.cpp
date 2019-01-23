// Fill out your copyright notice in the Description page of Project Settings.

#include "Test.h"

ATest* ATest::MyCustomSingletonObj(NULL);

ATest* ATest::GetMyCustomSingleton() 
{
	if (!MyCustomSingletonObj) {
		MyCustomSingletonObj = NewObject<ATest>();

	}
	return MyCustomSingletonObj;

}