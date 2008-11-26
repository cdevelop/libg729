#include <stdio.h>
#include <stdlib.h>
#include "EasyG729A.h"

extern "C"
{
	void g729_init_coder(CODER_HANDLE *hEncoder, int dummy){
		*hEncoder =  EasyG729A_init_encoder();
	}
	void g729_release_coder(CODER_HANDLE *hEncoder){
		if (*hEncoder) EasyG729A_release_encoder(*hEncoder);
	}
	void g729_init_decoder(CODER_HANDLE *hDecoder){
		*hDecoder =  EasyG729A_init_decoder();
	}
	void g729_release_decoder(CODER_HANDLE *hDecoder){
		if (*hDecoder) EasyG729A_release_encoder(*hDecoder);
	}
	
	void g729_coder(CODER_HANDLE *hEncoder, short *ddp, char *edp, int *cbret){
		 EasyG729A_encoder(*hEncoder, ddp, (unsigned char *)edp);	
	}
	void g729_decoder(CODER_HANDLE *hDecoder, short *ddp, char *edp, int plen){
		 EasyG729A_decoder(*hDecoder, (unsigned char *)edp, (short *)ddp);	
	}


};
