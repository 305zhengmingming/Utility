//
//  UIColor+Hex.h
//  Utility
//
//  Created by xiaomingdemac on 2017/11/28.
//  Copyright © 2017年 Dusun. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIColor (Hex)
//传入0-100一个值转换成颜色
+ (UIColor *)fromHexValue:(NSUInteger)hex;
//传入0-100的一个值和透明度转换成颜色
+ (UIColor *)fromHexValue:(NSUInteger)hex alpha:(CGFloat)alpha;
//根据传入的字符串转换成颜色
+ (UIColor *)colorWithString:(NSString *)string;
@end
