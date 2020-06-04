//
//  DSCMarsPhoto.h
//  AstronomyOBJCSwift
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
@property (nonatomic,readonly, nonnull)NSDate *earthDate;
@property (nonatomic,readonly, nonnull)NSURL *imageURL;

- (nonnull instancetype)initWithID:(int)id
                               sol:(int)sol
                            camera:(nonnull DSCCamera *)camera
                         earthDate:(nonnull NSDate *)earthDate
                          imageURL:(nonnull NSURL *)imgSrc;


@end
