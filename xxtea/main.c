//
//  main.c
//  xxtea
//
//  Created by 徐仙华 on 13-11-8.
//  Copyright (c) 2013年 Senhua Jo. All rights reserved.
//

#include <stdio.h>
#include "main.h"
#include <string.h>

int main(int argc, const char * argv[])
{
    xxtea_long ret_length, data_len, result_len;
    unsigned char *result, *retval;
    unsigned char *meta_string = (unsigned char *)"深圳市创梦科技有限公司";
    unsigned char *meta_key = (unsigned char *)"http://www.idreamsky.com";
    
    data_len = (xxtea_long)strlen((const char *)meta_string);
    
    result = encrypt(meta_string, data_len, meta_key, &ret_length);
    
    result_len = (xxtea_long)(sizeof(result)) * (xxtea_long)strlen((const char *)result);
    retval = decrypt(result, result_len, meta_key, &ret_length);
    printf("%s", retval);
    printf("Finish\n");
}

