//
//  DSCMarsPhoto.h
//  AstronomyObjC
//
//  Created by denis cedeno on 6/4/20.
//  Copyright © 2020 DenCedeno Co. All rights reserved.
//

#import <Foundation/Foundation.h>

@class DSCCamera;

NS_SWIFT_NAME(MarsPhotoReference)
@interface DSCMarsPhoto : NSObject

@property (nonatomic, readonly, nonnull)int *id;
@property (nonatomic, readonly, nonnull)int *sol;
@property (nonatomic, readonly, nonnull)DSCCamera *camera;
@property (nonatomic,readonly, nonnull)NSDate *date;

- (nonnull instancetype)initWithID:(int)id
                               sol:(int)sol
                            camera:(nonnull DSCCamera *)camera
                              date:(nonnull NSDate *)date;

@end
