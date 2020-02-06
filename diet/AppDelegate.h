//
//  AppDelegate.h
//  diet
//
//  Created by hdb on 06/02/20.
//  Copyright © 2020 Hector. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : NSObject <NSApplicationDelegate>

@property (readonly, strong) NSPersistentCloudKitContainer *persistentContainer;


@end

