/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class ML3Container, NSArray, ML3Predicate;

@interface ML3ContainerQuery : ML3Query  {
    ML3Predicate *_containerPredicate;
    ML3Container *_container;
    NSArray *_limitedPersistentIDs;
}

@property(readonly) NSArray * limitedPersistentIDs;
@property(readonly) ML3Container * container;
@property(readonly) BOOL requiresSmartLimiting;


- (id)limitedPersistentIDs;
- (BOOL)requiresSmartLimiting;
- (id)initWithEntityClass:(Class)arg1 container:(id)arg2 predicate:(id)arg3 orderingTerms:(id)arg4;
- (id)valueForAggregateFunction:(id)arg1 onEntitiesForProperty:(id)arg2;
- (id)enumerationDatabaseResultForSQL:(id)arg1 onConnection:(id)arg2 withParameters:(id)arg3;
- (id)selectPersistentIDsSQLAndProperties:(id)arg1 ordered:(BOOL)arg2;
- (unsigned int)countOfDistinctRowsForColumn:(id)arg1;
- (unsigned int)countOfEntities;
- (BOOL)hasEntities;
- (void).cxx_destruct;
- (id)container;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end