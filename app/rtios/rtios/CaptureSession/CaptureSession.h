//
//  CaptureSession.h
//  rtios
//
//  Created by Igor on 31/07/2020.
//  Copyright © 2020 rusito23. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class CaptureSession;

@protocol CaptureSessionDelegate <NSObject>
- (CALayer *) rootLayer;
- (CGRect) rootFrame;
- (void) captureSession:(CaptureSession *)captureSession didCaptureFrame:(UIImage *)frame;
@end

@interface CaptureSession : NSObject
- (id) initWithDelegate:(NSObject<CaptureSessionDelegate> *)delegate;
- (void) startSession;
- (void) endSession;
@end

NS_ASSUME_NONNULL_END
