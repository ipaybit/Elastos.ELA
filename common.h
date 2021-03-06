/* Elastos Coin */

/* This file was written in 2017 by Yuan Xun. */

/* The license for this file has not yet been determined.
   Yuan Xun is hoping that some of these component files
   may be dual-licensed under the GPL and the Unlicense.
   Whereas the GPL is a strong libre license, the
   Unlicense is a weak libre license. This does not have
   to be a permanent arrangement. Mr Yuan would be
   contented if this happened only for the first one or
   two prereleases of Elastos Coin. That way, any useful
   subroutines of a customary nature contained within the
   codebase may be utilized by those who have possible
   disagreements with the GPL. */

/* The text of the Unlicense (without the second
   paragraph, which may not be necessary) is as follows: */

/* This is free and unencumbered software released into
   the public domain. Anyone is free to copy, modify,
   publish, use, compile, sell, or distribute this
   software, either in source code form or as a compiled
   binary, for any purpose, commercial or non-commercial,
   and by any means. In jurisdictions that recognize
   copyright laws, the author or authors of this software
   dedicate any and all copyright interest in the
   software to the public domain. We make this dedication
   for the benefit of the public at large and to the
   detriment of our heirs and successors. We intend this
   dedication to be an overt act of relinquishment in
   perpetuity of all present and future rights to this
   software under copyright law. */

/* The text of the GPL (the second version) is as
   follows: */

/* The text of the GPL (the third version) is as follows: */

int compare_9863(unsigned char *subject, unsigned char *object, int length) {

   int index;

   for (index = length - 1; index >= 0; index--) {

      if (subject[index] < object[index])
         { return 1; }

      if (subject[index] > object[index])
         { return 0; }
   }

   return 1;
}
