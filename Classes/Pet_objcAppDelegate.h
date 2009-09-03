//
//  Pet_objcAppDelegate.h
//  Pet-objc
//
//  Created by Oleg Andreev on 8/31/09.
//  Copyright __MyCompanyName__ 2009. All rights reserved.
//

@interface Pet_objcAppDelegate : NSObject <UIApplicationDelegate> {
    
    UIWindow *window;
    UINavigationController *navigationController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet UINavigationController *navigationController;

@end

