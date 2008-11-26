/* dujinfang@gmail.com
 * wrapper for C++ lib of EasyG729A
 * make compatible with freeswitch mod_g729
 */

#include <stdio.h>
#include <stdlib.h>
//#include "EasyG729A.h"

#define  CODER_HANDLE  unsigned long

void g729_init_coder(CODER_HANDLE *hEncoder, int);
void g729_release_coder(CODER_HANDLE *hEncoder);
void g729_init_decoder(CODER_HANDLE *hDecoder);
void g729_release_decoder(CODER_HANDLE *hDecoder);
void g729_coder(CODER_HANDLE *hEncoder, short *ddp, char *edp, int *plen);
void g729_decoder(CODER_HANDLE *hDecoder, short *ddp, char *edp, int cbret);
