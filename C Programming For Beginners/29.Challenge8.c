/* Copyright (C) 2021 Jinx.
   This file is part of CProjects.
   Created by Jinx CGCO <HermadesCGCO@disroot.org>, 2021.

   CProjects is free software; you can redistribute it and/or modify it
   under the terms of the GNU General Public License V3 as published by the
   Free Software Foundation.

   CProjects is distributed in the hope that it will be useful, but WITHOUT
   ANY WARRAMTY; without even the implied warranty of MERCHANTABILITY or
   FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License V3
   for more details.

   You should have received a copy of the GNU General Public License V3
   along with CProjects; if not, see
   <https://www.gnu.org/licenses/>. */

#include <stdio.h>

#define MONTHS 12
#define YEARS 5

int
main ()
{
  float rainfall_amounts[YEARS][MONTHS]
      = { { 4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6 },
          { 8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3 },
          { 9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4 },
          { 7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.2 },
          { 7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 5.2 } };

  int year, month;
  float subtotal, total;

  printf ("YEAR\t\tRAINFALL (inches)\n");

  for (year = 0, total = 0; year < YEARS; year++)
    {
      for (month = 0, subtotal = 0; month < MONTHS; month++)
        {
          subtotal += rainfall_amounts[year][month];
        }

      printf ("%5d\t\t%15.1f\n", 2010 + year, subtotal);
      total += subtotal;
    }

  printf ("\nThe yearly average is %.1f inches.\n\n", total / YEARS);

  printf ("MONTHLY AVERAGES:\n\n");
  printf (" Jan  Feb  Mar  Apr  May  Jun  Jul  Aug  Sep  Oct  Nov  Dec\n");

  for (month = 0; month < MONTHS; month++)
    {
      for (year = 0, subtotal = 0; year < YEARS; year++)
        subtotal += rainfall_amounts[year][month];

      printf ("%4.1f ", subtotal / YEARS);
    }

  printf ("\n");

  return 0;
}
