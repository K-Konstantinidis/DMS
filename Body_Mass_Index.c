/*************************************************************************
        Copyright � 2021 Konstantinidis Konstantinos

	Licensed under the Apache License, Version 2.0 (the "License");
	you may not use this file except in compliance with the License.
	You may obtain a copy of the License at

        http://www.apache.org/licenses/LICENSE-2.0

	Unless required by applicable law or agreed to in writing, software
	distributed under the License is distributed on an "AS IS" BASIS,
	WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
	See the License for the specific language governing permissions and
	limitations under the License.
*************************************************************************/
#include <stdio.h>
#include "genlib.h"
#include "simpio.h"

main()
{
    double weight, height, DMS;

    printf("Insert height:");
    height = GetReal();
    while(height <= 0){
        printf("Insert height:");
        height = GetReal();
    }

    printf("Insert weight:");
    weight = GetReal();
    while(weight <= 0){
        printf("Insert weight:");
        weight = GetReal();
    }

    DMS = weight / (height * height);
    if(DMS < 18.5)
        printf("Underweight \n");
    else if(DMS < 25)
        printf("Normal \n");
    else if(DMS < 30)
        printf("Overweight \n");
    else
        printf("Obese \n");

    system("PAUSE");
}
