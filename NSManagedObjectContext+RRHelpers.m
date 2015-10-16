//
//  RRCoreData
//
//  Created by Resenchuk Roman
//  Copyright (c) 2015 Resenchuk Roman (romanres@romanres.ru)
//  All rights reserved.
//

#import "NSManagedObjectContext+RRHelpers.h"



@implementation NSManagedObjectContext (Helpers)

- (NSArray *)fetchObjects:(NSString *)entityName withPredicate:(NSPredicate *)predicate {
    NSFetchRequest *fetchRequest = [NSFetchRequest fetchRequestWithEntityName:entityName];
    fetchRequest.predicate = predicate;
    return [self executeFetchRequest:fetchRequest error:nil];
}

- (void)deleteObjects:(NSString *)entityName withPredicate:(NSPredicate *)predicate {
    for (NSManagedObject *object in [self fetchObjects:entityName withPredicate:predicate]) {
        [self deleteObject:object];
    }
}

@end
