//
//  SLMPaternLockManager.h
//  SLMAuthKit
//
//  Created by fengxin on 2017/12/19.
//  Copyright © 2017年 fengxin. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SLMPatternLockManager : NSObject

/**
 设置或解锁手势开启
 */
- (void)startPattern;


/**
 更改手势密码
 */
- (void)changePattern;

@end
