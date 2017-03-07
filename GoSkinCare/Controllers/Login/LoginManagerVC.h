//
//  LoginManagerVC.h
//  GoSkinCare
//
//  Created by Luokey on 2/17/16.
//  Copyright © 2016 Luokey. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol LoginManagerDelegate;

@interface LoginManagerVC : UIViewController

@property (strong, nonatomic) id<LoginManagerDelegate> delegate;

@end

@protocol LoginManagerDelegate <NSObject>

- (void)loginManager:(LoginManagerVC*)loginManager didSuccessToLoginWithEmail:(NSString*)email password:(NSString*)password;
- (void)loginManager:(LoginManagerVC*)loginManager didFailToLoginWithEmail:(NSString*)email;

@end