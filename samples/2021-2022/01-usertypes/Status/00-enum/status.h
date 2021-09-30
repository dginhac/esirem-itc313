/**
 * @Author: Dominique Ginhac <d0m>
 * @Date:   2020-09-09T13:04:30+02:00
 * @Email:  dginhac@u-bourgogne.fr
 * @Project: C++ Programming - ESIREM 3A IT
 * @Last modified by:   d0m
 * @Last modified time: 2020-09-10T14:05:53+02:00
 */

#ifndef STATUS_H
#define STATUS_H

enum Status { // Braces surround the entries
   Pending,   // a comma-separated
   Urgent,    // set of constants
   Delayed,   // (integers) with unique names
   Cancelled,
   Done       // No comma after the last one
}; // Do not forget the semi-colon

#endif // STATUS_H


