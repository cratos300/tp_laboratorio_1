/*
    utest example : Unit test examples.
    Copyright (C) <2016>  <Mauricio Davila>

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../testing/inc/main_test.h"
#include "../inc/ArrayList.h"
#include "../inc/Employee.h"



int main(void)
{
       startTesting(1); //new-BIEN
       startTesting(2); //add-BIEN
       startTesting(3); //delete-BIEN
       startTesting(4); //len-BIEN
       startTesting(5); //gets;-BIEN
          startTesting(6); //old_contain-BIEN
       startTesting(7); //old_Set-BIEN
          startTesting(8); //old_remove-BIEN
          startTesting(9); //clear // FALTA.
            startTesting(10);//clone BIEN.
         startTesting(11); // FALTA.
      startTesting(12); // BIEN.
        startTesting(13); // BIEN.
         startTesting(14); // MAL
        //startTesting(15); // MAL
            startTesting(16); // BIEN.
       //startTesting(17);

    return 0;
}





