//
//  NSString+Valid.h
//  Utility
//
//  Created by xiaomingdemac on 2017/11/27.
//  Copyright © 2017年 Dusun. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (Valid)
//字符串是否为空的判定 ture表示不为空，flase表示为空
+ (BOOL)stringLength:(NSString *)str;
//手机号的校验(移动：134/135/136/137/138/139/150/151/152/157/158/159/182/183/184/187/188/147/178 联通：130/131/132/155/156/185/186/176/145 电信：133/153/180/181/189/177/173 虚拟运营商：170)
+ (BOOL)stringWithPhoneValidate:(NSString *)str;
//身份证号的校验
+ (BOOL)stringWithIdentityCardValidate:(NSString *)str;
//邮箱的校验
+ (BOOL)stringWithEmailValidate:(NSString *)str;
//验证填写的金额
+ (BOOL)stringWithmoneyValidate:(NSString *)str;
//验证汉字
+ (BOOL)stringWithChineseValidate:(NSString *)str;
//验证数字
+ (BOOL)stringWithNumValidate:(NSString *)str;

@end
