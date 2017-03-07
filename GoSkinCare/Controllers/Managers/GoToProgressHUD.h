//
//  GoToProgressHUD.h
//  GoSkinCare
//
//  Created by Luokey on 12/18/15.
//  Copyright © 2015 Luokey. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface GoToProgressHUD : NSObject

+ (GoToProgressHUD*)progressHUD;

+ (void)showWithStatus:(NSString*)status;
+ (void)dismiss;

@end