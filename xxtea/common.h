//
//  common.h
//  xxtea
//
//  Created by 徐仙华 on 13-11-9.
//  Copyright (c) 2013年 Senhua Jo. All rights reserved.
//

#ifndef xxtea_common_h
#define xxtea_common_h

#include "xxtea.h"

extern xxtea_long *xxtea_to_long_array(unsigned char*, xxtea_long, int, xxtea_long *);

extern unsigned char *xxtea_to_byte_array(xxtea_long *, xxtea_long, int, xxtea_long *);

extern unsigned char *decrypt(unsigned char *, xxtea_long, unsigned char *, xxtea_long *);

extern unsigned char *encrypt(unsigned char *, xxtea_long, unsigned char *, xxtea_long *);

#endif

