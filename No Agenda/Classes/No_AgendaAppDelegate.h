//
//  No_AgendaAppDelegate.h
//  No Agenda
//
//  Created by Matt on 7/30/09.
//  Copyright 25appsinaug 2009. Some rights reserved.
//
/*
 
 This work is licensed under the Creative Commons Attribution-Noncommercial-Share Alike 3.0 United States License.
 To view a copy of this license, visit http://creativecommons.org/licenses/by-nc-sa/3.0/us/ or send a letter to Creative Commons, 171 Second Street, Suite 300, San Francisco, California, 94105, USA.
 */
#import <UIKit/UIKit.h>

@class No_AgendaViewController;

@interface No_AgendaAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    No_AgendaViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet No_AgendaViewController *viewController;

@end

