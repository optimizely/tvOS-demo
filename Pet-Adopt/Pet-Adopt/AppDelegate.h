//
//  AppDelegate.h
//  Pet-Adopt
//
//  Created by Joshua H. Wang on 8/25/16.
//  Copyright © 2016 Optimizely. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>
// Import Optimizely SDK
#import <OptimizelySDKCore/OptimizelySDKCore.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (strong, nonatomic) NSString *userId;
@property (strong, nonatomic) NSString *projectId;
@property (strong, nonatomic) NSString *experimentKey;
@property (strong, nonatomic) NSString *eventKey;
// Reference to your Optimizely instance
@property (strong, nonatomic) Optimizely *optimizely;

- (void)saveContext;
- (NSURL *)applicationCachesDirectory;


@end

