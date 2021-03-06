//
//  BATAudioView.h
//  HealthBAT_Pro
//
//  Created by four on 16/10/14.
//  Copyright © 2016年 KMHealthCloud. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "BATTIMManager.h"
#import "BATLoginModel.h"

#import "BATNewMessageModel.h"
#import <AgoraRtcEngineKit/AgoraRtcEngineKit.h>
#import "UINavigationController+FDFullscreenPopGesture.h"

#import "BATConsultationDoctorDetailModel.h"

@interface BATAudioView : UIView<AgoraRtcEngineDelegate>
//声网类
@property (strong, nonatomic) AgoraRtcEngineKit *agoraKit;

/**
 *  声网key
 */
@property (nonatomic,copy) NSString *AGDKeyVendorKey;

/**
 *  房间号
 */
@property (nonatomic,copy) NSString *AGDKeyChannel;


- (void)joinWithKey:(NSString *)key andWithChannel:(NSString *)channel;
@end
