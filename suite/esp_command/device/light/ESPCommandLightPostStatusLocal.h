//
//  ESPCommandLightPostStatusLocal.h
//  suite
//
//  Created by 白 桦 on 6/8/16.
//  Copyright © 2016 白 桦. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ESPStatusLight.h"
#import "ESPDeviceLight.h"

@interface ESPCommandLightPostStatusLocal : NSObject

/**
 * post the statusLight to the Light by Local
 *
 * @param device the light device
 * @param statusLight the status of Light
 * @return whether the command executed suc
 */
-(BOOL) doCommandLightPostStatusLocal:(ESPDeviceLight *)device StatusLight:(ESPStatusLight *)statusLight;

@end
