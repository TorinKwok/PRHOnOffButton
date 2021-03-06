//
//  PRHOnOffButtonAppDelegate.h
//  PRHOnOffButton
//
//  Created by Peter Hosey on 2010-01-10.
//  Copyright 2010 Peter Hosey. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface PRHOnOffButtonAppDelegate : NSObject {
    NSWindow *window;
	NSCellStateValue onState, offState, mixedState;
}

@property (assign) IBOutlet NSWindow *window;
@property NSCellStateValue onState, offState, mixedState;

@end
