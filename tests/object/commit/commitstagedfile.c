	char buffer[128];
	cl_assert(git_oid_cmp(&expected_blob_oid, &entry->oid) == 0);
	cl_assert_equal_i(16, git_message_prettify(buffer, 128, "Initial commit", 0));
		buffer,