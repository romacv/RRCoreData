//
//  RRCoreData
//
//  Created by Resenchuk Roman
//  Copyright (c) 2015 Resenchuk Roman (romanres@romanres.ru)
//  All rights reserved.
//

#import <Foundation/Foundation.h>
@import CoreData;

@interface RRCoreData : NSObject

// Initialize database model name in AppDelegate
// For example: [[RRCoreData db] setName:@"DBModel"];

+ (instancetype)db;
@property (nonatomic) NSString *name;

- (NSManagedObjectModel *)managedObjectModel;
- (NSPersistentStoreCoordinator *)persistentStoreCoordinator;
- (NSManagedObjectContext *)managedObjectContext;

@end
