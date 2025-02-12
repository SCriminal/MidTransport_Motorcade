//
//  CLShanYanSDKManager.h
//  CL_ShanYanSDK
//
//  Created by wanglijun on 2018/10/29.
//  Copyright © 2018 wanglijun. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#import "CLCompleteResult.h"
#import "CLUIConfigure.h"

NS_ASSUME_NONNULL_BEGIN
@interface CLShanYanSDKManager : NSObject
/**
 预初始化 Block方式
 @param appId 闪验后台申请的appId
 @param appKey 闪验后台申请的appKey
 @param timeOut 超时时间，单位s，传大于0有效，传小于等于0使用默认，默认5s
 @param complete 预初始化回调block 注：(对于预初始化失败的，之后仍可以直接调一键登录接口，SDK内部会再次尝试初始化。当用户收到此回调为失败时，之后可以自行决定是否要调用闪验一键登录，可以通过+(CLCompleteResult*)clSDKInitStutas方法获取当前预初始化状态）
 */
+(void)initWithAppId:(NSString *)appId AppKey:(NSString *)appKey timeOut:(NSTimeInterval)timeOut  complete:(nullable CLComplete)complete;


/**
 预取号
 --初始化方法内部会自动执行一次预取号，一般情况下外部可无需调用
 --建议在即将执行一键登录的地方的前60s调用此方法，比如调一键登录的vc的viewdidload中，当初始化的预取号失败的情况下，此调用将有助于提高闪验拉起授权页的速度和成功率
 --不建议频繁的多次调用和在拉起授权页后调用
 */
+(void)preGetPhonenumber;

/**
 获取SDK预初始化完成情况（成功/失败），用户可以在将要调用闪验一键登录方法处，通过此方法获取SDK预初始化情况，对于预初始化失败的，仍可以直接调一键登录接口，由用户自行决定
 @return CLSDKInitStutas
 */
+(CLSDKInitStutas)clSDKInitStutas;


/**
 一键登录(授权页) 方式2 三网可分别配置logo
 @param ctccConfigure 电信配置
 @param cmccConfigure 移动配置
 @param cuccConfigure 联通配置
 @param timeOut 超时时间，单位s，传大于0有效，传小于等于0使用默认，默认5s
 @param complete 回调block
 */
+(void)quickAuthLoginWithConfigureCTCC:(CLCTCCUIConfigure *)ctccConfigure
                                  CMCC:(CLCMCCUIConfigure *)cmccConfigure
                                  CUCC:(CLCUCCUIConfigure *)cuccConfigure
                               timeOut:(NSTimeInterval)timeOut
                              complete:(nonnull CLComplete)complete;

@end

NS_ASSUME_NONNULL_END
