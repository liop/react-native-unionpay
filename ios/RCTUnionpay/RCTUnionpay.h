//
//  RCTUnionpay.h
//  RCTUnionpay
//
//  Created by Alim on 10/25/16.
//  Copyright © 2016 Alim. All rights reserved.
//

#import <Foundation/Foundation.h>

#if __has_include(<React/RCTBridge.h>)
#import <React/RCTBridgeModule.h>
#import <React/RCTLog.h>
#import <React/RCTEventDispatcher.h>
#import <React/RCTEventEmitter.h>
#else
#import "RCTBridgeModule.h"
#import "RCTLog.h"
#import "RCTEventDispatcher.h"
#import "RCTEventEmitter.h"
#endif

#import "UPPaymentControl.h"
#define URL_SCHEMES_NOT_DEFINED (@"URL scheme is not defined!")
#define START_PAY_FAILED (@"start pay failed")

@interface RCTUnionpay : RCTEventEmitter <RCTBridgeModule>
@property NSString* schemeStr;
@end
