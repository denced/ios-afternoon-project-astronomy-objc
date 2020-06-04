//
//  DSCCamera.h
//  AstronomyOBJCSwift
//
//  Created by denis cedeno on 6/4/20.
//  Copyright © 2020 DenCedeno Co. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface DSCCamera : NSObject

@property (nonatomic)int *id;
@property (nonatomic)int *roverId;
@property (nonatomic, readonly, copy)NSString *name;
@property (nonatomic, readonly, copy)NSString *fullName;

@end



NS_ASSUME_NONNULL_END
