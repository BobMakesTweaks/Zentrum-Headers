//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TWPreferenceManager;

@interface ZMSettings : NSObject
{
    TWPreferenceManager *prefs;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (double)animationDuration;
- (_Bool)swapOrderEnabled;
- (_Bool)musicPlayerEnabled;
- (_Bool)controlTogglesEnabled;
- (_Bool)enabled;
- (void)reload;
- (id)init;

@end
