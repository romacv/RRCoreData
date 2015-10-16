//
//  NSManagedObjectContext+Helpers.h
//  CookerDemo
//
//  Created by Dan on 16.06.15.
//  Copyright (c) 2015 Алексей. All rights reserved.
//

#import <CoreData/CoreData.h>



@interface NSManagedObjectContext (Helpers)

// Interface should be used by NSManagedObject+Helpers
- (NSArray *)fetchObjects:(NSString *)entityName withPredicate:(NSPredicate *)predicate;
- (void)deleteObjects:(NSString *)entityName withPredicate:(NSPredicate *)predicate;

@end
